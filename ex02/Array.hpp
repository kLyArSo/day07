#include <iostream>

template<typename T>
class Array
{
    private:
        T   *ptr;
        unsigned int the_size;
    public:
        Array() : ptr(new T[0]),the_size(0) 
        {            
            std::cout << "Default Constructor Called!\n";
        }
        Array(const Array& other)
        {
            std::cout << "Copy Constructor Called!\n";
            (*this) = (*other);
        }
        void    operator=(const Array& other)
        {
            this->the_size = other.the_size;
            this->ptr = new T[the_size];
            unsigned int i = 0;
            while(i < the_size)
            {
                this->ptr[i] = other.ptr[i];
                i++;
            }
        }
        ~Array()
        {
            std::cout << "Default Destructor Called!\n";
            delete[] ptr;
        }
        
        unsigned int     size() const
        {
            return (the_size);
        } 
        
        const T &operator[](unsigned int  i) const 
        {
            if (i < 0 || i >= this->the_size)
                throw OutOfBoundsException();
            return (ptr[i]);
        }
        T &operator[](unsigned int  i) 
        {
            if (i < 0 || i >= this->the_size)
                throw OutOfBoundsException();
            return (ptr[i]);
        }
        Array(unsigned int n) :  ptr(new T[n]),the_size(n)
        {
            std::cout << "Costum Constructor Called!\n";
            unsigned int i = 0;
            while (i < n)
            {
                ptr[i] = (T)'*';
                i++;
            }
        }

        class OutOfBoundsException : public std::exception
        {
            virtual const char *what() const throw() 
            {
                return ("Given Index Is Out Of Bounds!");
            }
        };

};