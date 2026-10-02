#include <iostream>
template<typename T, int N, int M>
class Matrix{
    int n;
    int m;
    T** matr;
public:
    Matrix():n(N), m(M){
        matr=new T*[n];
        for(int i=0; i<n; ++i){
            matr[i]=new T[m];
        }
    }

    Matrix(const Matrix& other){
        this->n=other.n;
        m=other.m;
        matr=new T*[n];
        for(int i=0; i<n; ++i){
            matr[i]=new T[m];
        }
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                matr[i][j]=other.matr[i][j];
            }
        }
    }

    Matrix &operator=(const Matrix& other){
        if(this!= &other){
            for(int i=0; i<n; ++i){
                delete [] matr[i];
            }
            delete [] matr;

            this->n=other.n;
            m=other.m;
            matr=new T*[n];
            for(int i=0; i<n; ++i){
                matr[i]=new T[m];
            }
            for(int i=0; i<n; ++i){
                for(int j=0; j<m; ++j){
                    matr[i][j]=other.matr[i][j];
                }
            } 
        
        }
        return *this;
    }

    Matrix(Matrix &&other){
        n=other.n;
        m=other.m;
        matr=other.matr;

        other.n=0;
        other.m=0;
        other.matr=nullptr;
    }

    Matrix &operator=(Matrix &&other){
        if(this!=&other){
            for(int i=0; i<n; ++i){
                delete [] matr[i];
            }
            delete [] matr;

            n=other.n;
            m=other.m;
            matr=other.matr;

            other.n=0;
            other.m=0;
            other.matr=nullptr;
        }
        return *this;
    }

    ~Matrix(){
        for(int i=0; i<n; ++i){
                delete [] matr[i];
            }
            delete [] matr;
    }

    Matrix &operator+(const Matrix& other)const{
        Matrix<T, N, M>* sum = new Matrix<T, N, M>;
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                // sum[i][j]=matr[i][j]+other.matr[i][j];
                sum->set(i, j, matr[i][j]+other.matr[i][j]);
            }
        }
        return *sum;
    }

    void set(int row, int col, const T &value){
        matr[row][col]=value;
    }
    
    T get(int row, int col){
        return matr[row][col];
    }

    void print(){
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                std::cout << matr[i][j] << " ";
            }
            std::cout<<"\n";
        }
        std::cout<<"\n";
    }
};


void test(){
     Matrix<int, 6, 7> vaib;
    for(int i=0; i<6; ++i){
        for(int j=0; j<7; ++j){
            vaib.set(i, j, 67);
        }
    }
    vaib.print();

    Matrix<std::string, 13, 13> minsvaib;
    for(int i=0; i<13; ++i){
        for(int j=0; j<13; ++j){
            minsvaib.set(i, j, "ne kruto");
        }
    }
    minsvaib.set(6, 6, "otshislite pj");
    minsvaib.print();
    std::cout<<minsvaib.get(6, 6)<<"\n";

    Matrix<double, 5, 5> uje_serezno;
     for(int i=0; i<5; ++i){
        for(int j=0; j<5; ++j){
        uje_serezno .set(i, j, 3.14);
        }
    }
    Matrix<double, 5, 5> obechayu;
    for(int i=0; i<5; ++i){
        for(int j=0; j<5; ++j){
        obechayu.set(i, j, 2.71);
        }
    }

    Matrix<double, 5, 5> k_sojaleniu;
        k_sojaleniu = uje_serezno + obechayu;
        k_sojaleniu.print();

}

int main(){
    test();
}
