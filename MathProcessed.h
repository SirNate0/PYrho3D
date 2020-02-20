       
       
       
       
       
       
       
       
       
       
namespace Urho3D
{
class HashBase;
class ListBase;
class String;
class VectorBase;
template <class T> inline void Swap(T& first, T& second)
{
    T temp = first;
    first = second;
    second = temp;
}
template <> void Swap<String>(String& first, String& second);
template <> void Swap<VectorBase>(VectorBase& first, VectorBase& second);
template <> void Swap<ListBase>(ListBase& first, ListBase& second);
template <> void Swap<HashBase>(HashBase& first, HashBase& second);
}
namespace Urho3D
{
template <class T> struct RandomAccessIterator
{
    RandomAccessIterator() :
        ptr_(0)
    {
    }
    explicit RandomAccessIterator(T* ptr) :
        ptr_(ptr)
    {
    }
    T* operator ->() const { return ptr_; }
    T& operator *() const { return *ptr_; }
    RandomAccessIterator<T>& operator ++()
    {
        ++ptr_;
        return *this;
    }
    RandomAccessIterator<T> operator ++(int)
    {
        RandomAccessIterator<T> it = *this;
        ++ptr_;
        return it;
    }
    RandomAccessIterator<T>& operator --()
    {
        --ptr_;
        return *this;
    }
    RandomAccessIterator<T> operator --(int)
    {
        RandomAccessIterator<T> it = *this;
        --ptr_;
        return it;
    }
    RandomAccessIterator<T>& operator +=(int value)
    {
        ptr_ += value;
        return *this;
    }
    RandomAccessIterator<T>& operator -=(int value)
    {
        ptr_ -= value;
        return *this;
    }
    RandomAccessIterator<T> operator +(int value) const { return RandomAccessIterator<T>(ptr_ + value); }
    RandomAccessIterator<T> operator -(int value) const { return RandomAccessIterator<T>(ptr_ - value); }
    int operator -(const RandomAccessIterator& rhs) const { return (int)(ptr_ - rhs.ptr_); }
    bool operator ==(const RandomAccessIterator& rhs) const { return ptr_ == rhs.ptr_; }
    bool operator !=(const RandomAccessIterator& rhs) const { return ptr_ != rhs.ptr_; }
    bool operator <(const RandomAccessIterator& rhs) const { return ptr_ < rhs.ptr_; }
    bool operator >(const RandomAccessIterator& rhs) const { return ptr_ > rhs.ptr_; }
    bool operator <=(const RandomAccessIterator& rhs) const { return ptr_ <= rhs.ptr_; }
    bool operator >=(const RandomAccessIterator& rhs) const { return ptr_ >= rhs.ptr_; }
    T* ptr_;
};
template <class T> struct RandomAccessConstIterator
{
    RandomAccessConstIterator() :
        ptr_(0)
    {
    }
    explicit RandomAccessConstIterator(T* ptr) :
        ptr_(ptr)
    {
    }
    RandomAccessConstIterator(const RandomAccessIterator<T>& rhs) :
        ptr_(rhs.ptr_)
    {
    }
    RandomAccessConstIterator<T>& operator =(const RandomAccessIterator<T>& rhs)
    {
        ptr_ = rhs.ptr_;
        return *this;
    }
    const T* operator ->() const { return ptr_; }
    const T& operator *() const { return *ptr_; }
    RandomAccessConstIterator<T>& operator ++()
    {
        ++ptr_;
        return *this;
    }
    RandomAccessConstIterator<T> operator ++(int)
    {
        RandomAccessConstIterator<T> it = *this;
        ++ptr_;
        return it;
    }
    RandomAccessConstIterator<T>& operator --()
    {
        --ptr_;
        return *this;
    }
    RandomAccessConstIterator<T> operator --(int)
    {
        RandomAccessConstIterator<T> it = *this;
        --ptr_;
        return it;
    }
    RandomAccessConstIterator<T>& operator +=(int value)
    {
        ptr_ += value;
        return *this;
    }
    RandomAccessConstIterator<T>& operator -=(int value)
    {
        ptr_ -= value;
        return *this;
    }
    RandomAccessConstIterator<T> operator +(int value) const { return RandomAccessConstIterator<T>(ptr_ + value); }
    RandomAccessConstIterator<T> operator -(int value) const { return RandomAccessConstIterator<T>(ptr_ - value); }
    int operator -(const RandomAccessConstIterator& rhs) const { return (int)(ptr_ - rhs.ptr_); }
    bool operator ==(const RandomAccessConstIterator& rhs) const { return ptr_ == rhs.ptr_; }
    bool operator !=(const RandomAccessConstIterator& rhs) const { return ptr_ != rhs.ptr_; }
    bool operator <(const RandomAccessConstIterator& rhs) const { return ptr_ < rhs.ptr_; }
    bool operator >(const RandomAccessConstIterator& rhs) const { return ptr_ > rhs.ptr_; }
    bool operator <=(const RandomAccessConstIterator& rhs) const { return ptr_ <= rhs.ptr_; }
    bool operator >=(const RandomAccessConstIterator& rhs) const { return ptr_ >= rhs.ptr_; }
    T* ptr_;
};
template <class TRandomAccessIterator, class T>
TRandomAccessIterator LowerBound(TRandomAccessIterator first, TRandomAccessIterator last, const T& value)
{
    unsigned count = last - first;
    while (count > 0)
    {
        const unsigned step = count / 2;
        const TRandomAccessIterator it = first + step;
        if (*it < value)
        {
            first = it + 1;
            count -= step + 1;
        }
        else
        {
            count = step;
        }
    }
    return first;
}
template <class TRandomAccessIterator, class T>
TRandomAccessIterator UpperBound(TRandomAccessIterator first, TRandomAccessIterator last, const T& value)
{
    unsigned count = last - first;
    while (count > 0)
    {
        const unsigned step = count / 2;
        const TRandomAccessIterator it = first + step;
        if (!(value < *it))
        {
            first = it + 1;
            count -= step + 1;
        }
        else
        {
            count = step;
        };
    }
    return first;
}
class VectorBase
{
public:
    VectorBase() :
        size_(0),
        capacity_(0),
        buffer_(0)
    {
    }
    void Swap(VectorBase& rhs)
    {
        Urho3D::Swap(size_, rhs.size_);
        Urho3D::Swap(capacity_, rhs.capacity_);
        Urho3D::Swap(buffer_, rhs.buffer_);
    }
protected:
    static unsigned char* AllocateBuffer(unsigned size);
    unsigned size_;
    unsigned capacity_;
    unsigned char* buffer_;
};
}
       
extern "C" {
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));
extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));
extern void __assert (const char *__assertion, const char *__file, int __line)
     throw () __attribute__ ((__noreturn__));
}
       
namespace std
{
  typedef long unsigned int size_t;
  typedef long int ptrdiff_t;
  typedef decltype(nullptr) nullptr_t;
}
namespace std
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
namespace __gnu_cxx
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
extern "C" {
typedef long unsigned int size_t;

extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *memmove (void *__dest, const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));
extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const void *memchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
}

extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *rawmemchr (const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *memrchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int strcmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcoll (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));

typedef struct __locale_struct
{
  struct __locale_data *__locales[13];
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
} *__locale_t;
typedef __locale_t locale_t;
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));
extern char *strdup (const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strndup (const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));

extern "C++"
{
extern char *strchr (char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strchr (const char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
}
extern "C++"
{
extern char *strrchr (char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strrchr (const char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
}

extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const char *strchrnul (const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern size_t strcspn (const char *__s, const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strspn (const char *__s, const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++"
{
extern char *strpbrk (char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strpbrk (const char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
}
extern "C++"
{
extern char *strstr (char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strstr (const char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
}
extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));

extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));
extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));
extern "C++" char *strcasestr (char *__haystack, const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++" const char *strcasestr (const char *__haystack,
         const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));
extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern size_t strlen (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern size_t strnlen (const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

extern char *strerror (int __errnum) throw ();

extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;
extern char *strerror_l (int __errnum, __locale_t __l) throw ();
extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));
extern void bcopy (const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++"
{
extern char *index (char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *index (const char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
}
extern "C++"
{
extern char *rindex (char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *rindex (const char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
}
extern int ffs (int __i) throw () __attribute__ ((__const__));
extern int ffsl (long int __l) throw () __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));
extern int strcasecmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcasecmp_l (const char *__s1, const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *strsignal (int __sig) throw ();
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int strverscmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));
extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));
extern "C++" char *basename (char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
extern "C++" const char *basename (const char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
}
namespace std __attribute__ ((__visibility__ ("default")))
{

  using ::memchr;
  using ::memcmp;
  using ::memcpy;
  using ::memmove;
  using ::memset;
  using ::strcat;
  using ::strcmp;
  using ::strcoll;
  using ::strcpy;
  using ::strcspn;
  using ::strerror;
  using ::strlen;
  using ::strncat;
  using ::strncmp;
  using ::strncpy;
  using ::strspn;
  using ::strtok;
  using ::strxfrm;
  using ::strchr;
  using ::strpbrk;
  using ::strrchr;
  using ::strstr;

}
       
       
#pragma GCC visibility push(default)
       
extern "C++" {
namespace std
{
  class exception
  {
  public:
    exception() noexcept { }
    virtual ~exception() noexcept;
    virtual const char* what() const noexcept;
  };
  class bad_exception : public exception
  {
  public:
    bad_exception() noexcept { }
    virtual ~bad_exception() noexcept;
    virtual const char* what() const noexcept;
  };
  typedef void (*terminate_handler) ();
  typedef void (*unexpected_handler) ();
  terminate_handler set_terminate(terminate_handler) noexcept;
  terminate_handler get_terminate() noexcept;
  void terminate() noexcept __attribute__ ((__noreturn__));
  unexpected_handler set_unexpected(unexpected_handler) noexcept;
  unexpected_handler get_unexpected() noexcept;
  void unexpected() __attribute__ ((__noreturn__));
  bool uncaught_exception() noexcept __attribute__ ((__pure__));
}
namespace __gnu_cxx
{

  void __verbose_terminate_handler();

}
}
#pragma GCC visibility pop
#pragma GCC visibility push(default)
extern "C++" {
namespace std
{
  class type_info;
  namespace __exception_ptr
  {
    class exception_ptr;
  }
  using __exception_ptr::exception_ptr;
  exception_ptr current_exception() noexcept;
  void rethrow_exception(exception_ptr) __attribute__ ((__noreturn__));
  namespace __exception_ptr
  {
    class exception_ptr
    {
      void* _M_exception_object;
      explicit exception_ptr(void* __e) noexcept;
      void _M_addref() noexcept;
      void _M_release() noexcept;
      void *_M_get() const noexcept __attribute__ ((__pure__));
      friend exception_ptr std::current_exception() noexcept;
      friend void std::rethrow_exception(exception_ptr);
    public:
      exception_ptr() noexcept;
      exception_ptr(const exception_ptr&) noexcept;
      exception_ptr(nullptr_t) noexcept
      : _M_exception_object(0)
      { }
      exception_ptr(exception_ptr&& __o) noexcept
      : _M_exception_object(__o._M_exception_object)
      { __o._M_exception_object = 0; }
      exception_ptr&
      operator=(const exception_ptr&) noexcept;
      exception_ptr&
      operator=(exception_ptr&& __o) noexcept
      {
        exception_ptr(static_cast<exception_ptr&&>(__o)).swap(*this);
        return *this;
      }
      ~exception_ptr() noexcept;
      void
      swap(exception_ptr&) noexcept;
      explicit operator bool() const
      { return _M_exception_object; }
      friend bool
      operator==(const exception_ptr&, const exception_ptr&)
 noexcept __attribute__ ((__pure__));
      const class std::type_info*
      __cxa_exception_type() const noexcept
 __attribute__ ((__pure__));
    };
    bool
    operator==(const exception_ptr&, const exception_ptr&)
      noexcept __attribute__ ((__pure__));
    bool
    operator!=(const exception_ptr&, const exception_ptr&)
      noexcept __attribute__ ((__pure__));
    inline void
    swap(exception_ptr& __lhs, exception_ptr& __rhs)
    { __lhs.swap(__rhs); }
  }
  template<typename _Ex>
    exception_ptr
    make_exception_ptr(_Ex __ex) noexcept
    {
      try
 {
   throw __ex;
 }
      catch(...)
 {
   return current_exception();
 }
    }
  template<typename _Ex>
    exception_ptr
    copy_exception(_Ex __ex) noexcept __attribute__ ((__deprecated__));
  template<typename _Ex>
    exception_ptr
    copy_exception(_Ex __ex) noexcept
    { return std::make_exception_ptr<_Ex>(__ex); }
}
}
#pragma GCC visibility pop
#pragma GCC visibility push(default)
extern "C++" {
namespace std
{
  class nested_exception
  {
    exception_ptr _M_ptr;
  public:
    nested_exception() noexcept : _M_ptr(current_exception()) { }
    nested_exception(const nested_exception&) noexcept = default;
    nested_exception& operator=(const nested_exception&) noexcept = default;
    virtual ~nested_exception() noexcept;
    [[noreturn]]
    void
    rethrow_nested() const
    {
      if (_M_ptr)
 rethrow_exception(_M_ptr);
      std::terminate();
    }
    exception_ptr
    nested_ptr() const noexcept
    { return _M_ptr; }
  };
  template<typename _Except>
    struct _Nested_exception : public _Except, public nested_exception
    {
      explicit _Nested_exception(const _Except& __ex)
      : _Except(__ex)
      { }
      explicit _Nested_exception(_Except&& __ex)
      : _Except(static_cast<_Except&&>(__ex))
      { }
    };
  template<typename _Tp,
    bool __with_nested = !__is_base_of(nested_exception, _Tp)>
    struct _Throw_with_nested_impl
    {
      template<typename _Up>
 static void _S_throw(_Up&& __t)
 { throw _Nested_exception<_Tp>{static_cast<_Up&&>(__t)}; }
    };
  template<typename _Tp>
    struct _Throw_with_nested_impl<_Tp, false>
    {
      template<typename _Up>
 static void _S_throw(_Up&& __t)
 { throw static_cast<_Up&&>(__t); }
    };
  template<typename _Tp, bool = __is_class(_Tp) && !__is_final(_Tp)>
    struct _Throw_with_nested_helper : _Throw_with_nested_impl<_Tp>
    { };
  template<typename _Tp>
    struct _Throw_with_nested_helper<_Tp, false>
    : _Throw_with_nested_impl<_Tp, false>
    { };
  template<typename _Tp>
    struct _Throw_with_nested_helper<_Tp&, false>
    : _Throw_with_nested_helper<_Tp>
    { };
  template<typename _Tp>
    struct _Throw_with_nested_helper<_Tp&&, false>
    : _Throw_with_nested_helper<_Tp>
    { };
  template<typename _Tp>
    [[noreturn]]
    inline void
    throw_with_nested(_Tp&& __t)
    {
      _Throw_with_nested_helper<_Tp>::_S_throw(static_cast<_Tp&&>(__t));
    }
  template<typename _Tp, bool = __is_polymorphic(_Tp)>
    struct _Rethrow_if_nested_impl
    {
      static void _S_rethrow(const _Tp& __t)
      {
 if (auto __tp = dynamic_cast<const nested_exception*>(&__t))
   __tp->rethrow_nested();
      }
    };
  template<typename _Tp>
    struct _Rethrow_if_nested_impl<_Tp, false>
    {
      static void _S_rethrow(const _Tp&) { }
    };
  template<typename _Ex>
    inline void
    rethrow_if_nested(const _Ex& __ex)
    {
      _Rethrow_if_nested_impl<_Ex>::_S_rethrow(__ex);
    }
}
}
#pragma GCC visibility pop
#pragma GCC visibility push(default)
extern "C++" {
namespace std
{
  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }
    virtual ~bad_alloc() throw();
    virtual const char* what() const throw();
  };
  class bad_array_new_length : public bad_alloc
  {
  public:
    bad_array_new_length() throw() { };
    virtual ~bad_array_new_length() throw();
    virtual const char* what() const throw();
  };
  struct nothrow_t { };
  extern const nothrow_t nothrow;
  typedef void (*new_handler)();
  new_handler set_new_handler(new_handler) throw();
  new_handler get_new_handler() noexcept;
}
void* operator new(std::size_t)
  __attribute__((__externally_visible__));
void* operator new[](std::size_t)
  __attribute__((__externally_visible__));
void operator delete(void*) noexcept
  __attribute__((__externally_visible__));
void operator delete[](void*) noexcept
  __attribute__((__externally_visible__));
void* operator new(std::size_t, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));
void* operator new[](std::size_t, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));
void operator delete(void*, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));
void operator delete[](void*, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));
inline void* operator new(std::size_t, void* __p) noexcept
{ return __p; }
inline void* operator new[](std::size_t, void* __p) noexcept
{ return __p; }
inline void operator delete (void*, void*) noexcept { }
inline void operator delete[](void*, void*) noexcept { }
}
#pragma GCC visibility pop
namespace Urho3D
{
template <class T> class Vector : public VectorBase
{
public:
    typedef T ValueType;
    typedef RandomAccessIterator<T> Iterator;
    typedef RandomAccessConstIterator<T> ConstIterator;
    Vector()
    {
    }
    explicit Vector(unsigned size)
    {
        Resize(size);
    }
    Vector(unsigned size, const T& value)
    {
        Resize(size);
        for (unsigned i = 0; i < size; ++i)
            At(i) = value;
    }
    Vector(const T* data, unsigned size)
    {
        InsertElements(0, data, data + size);
    }
    Vector(const Vector<T>& vector)
    {
        *this = vector;
    }
    ~Vector()
    {
        DestructElements(Buffer(), size_);
        delete[] buffer_;
    }
    Vector<T>& operator =(const Vector<T>& rhs)
    {
        if (&rhs != this)
        {
            Clear();
            InsertElements(0, rhs.Begin(), rhs.End());
        }
        return *this;
    }
    Vector<T>& operator +=(const T& rhs)
    {
        Push(rhs);
        return *this;
    }
    Vector<T>& operator +=(const Vector<T>& rhs)
    {
        Push(rhs);
        return *this;
    }
    Vector<T> operator +(const T& rhs) const
    {
        Vector<T> ret(*this);
        ret.Push(rhs);
        return ret;
    }
    Vector<T> operator +(const Vector<T>& rhs) const
    {
        Vector<T> ret(*this);
        ret.Push(rhs);
        return ret;
    }
    bool operator ==(const Vector<T>& rhs) const
    {
        if (rhs.size_ != size_)
            return false;
        T* buffer = Buffer();
        T* rhsBuffer = rhs.Buffer();
        for (unsigned i = 0; i < size_; ++i)
        {
            if (buffer[i] != rhsBuffer[i])
                return false;
        }
        return true;
    }
    bool operator !=(const Vector<T>& rhs) const
    {
        if (rhs.size_ != size_)
            return true;
        T* buffer = Buffer();
        T* rhsBuffer = rhs.Buffer();
        for (unsigned i = 0; i < size_; ++i)
        {
            if (buffer[i] != rhsBuffer[i])
                return true;
        }
        return false;
    }
    T& operator [](unsigned index)
    {
        ((index < size_) ? static_cast<void> (0) : __assert_fail ("index < size_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/../Container/Vector.h", 176, __PRETTY_FUNCTION__));
        return Buffer()[index];
    }
    const T& operator [](unsigned index) const
    {
        ((index < size_) ? static_cast<void> (0) : __assert_fail ("index < size_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/../Container/Vector.h", 183, __PRETTY_FUNCTION__));
        return Buffer()[index];
    }
    T& At(unsigned index)
    {
        ((index < size_) ? static_cast<void> (0) : __assert_fail ("index < size_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/../Container/Vector.h", 190, __PRETTY_FUNCTION__));
        return Buffer()[index];
    }
    const T& At(unsigned index) const
    {
        ((index < size_) ? static_cast<void> (0) : __assert_fail ("index < size_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/../Container/Vector.h", 197, __PRETTY_FUNCTION__));
        return Buffer()[index];
    }
    void Push(const T& value)
    {
        InsertElements(size_, &value, &value + 1);
    }
    void Push(const Vector<T>& vector) { InsertElements(size_, vector.Begin(), vector.End()); }
    void Pop()
    {
        if (size_)
            Resize(size_ - 1);
    }
    void Insert(unsigned pos, const T& value)
    {
        InsertElements(pos, &value, &value + 1);
    }
    void Insert(unsigned pos, const Vector<T>& vector)
    {
        InsertElements(pos, vector.Begin(), vector.End());
    }
    Iterator Insert(const Iterator& dest, const T& value)
    {
        unsigned pos = (unsigned)(dest - Begin());
        return InsertElements(pos, &value, &value + 1);
    }
    Iterator Insert(const Iterator& dest, const Vector<T>& vector)
    {
        unsigned pos = (unsigned)(dest - Begin());
        return InsertElements(pos, vector.Begin(), vector.End());
    }
    Iterator Insert(const Iterator& dest, const ConstIterator& start, const ConstIterator& end)
    {
        unsigned pos = (unsigned)(dest - Begin());
        return InsertElements(pos, start, end);
    }
    Iterator Insert(const Iterator& dest, const T* start, const T* end)
    {
        unsigned pos = (unsigned)(dest - Begin());
        return InsertElements(pos, start, end);
    }
    void Erase(unsigned pos, unsigned length = 1)
    {
        if (pos + length > size_ || !length)
            return;
        MoveRange(pos, pos + length, size_ - pos - length);
        Resize(size_ - length);
    }
    void EraseSwap(unsigned pos, unsigned length = 1)
    {
        unsigned shiftStartIndex = pos + length;
        if (shiftStartIndex > size_ || !length)
            return;
        unsigned newSize = size_ - length;
        unsigned trailingCount = size_ - shiftStartIndex;
        if (trailingCount <= length)
        {
            MoveRange(pos, shiftStartIndex, trailingCount);
        }
        else
        {
            CopyElements(Buffer() + pos, Buffer() + newSize, length);
        }
        Resize(newSize);
    }
    Iterator Erase(const Iterator& it)
    {
        unsigned pos = (unsigned)(it - Begin());
        if (pos >= size_)
            return End();
        Erase(pos);
        return Begin() + pos;
    }
    Iterator Erase(const Iterator& start, const Iterator& end)
    {
        unsigned pos = (unsigned)(start - Begin());
        if (pos >= size_)
            return End();
        unsigned length = (unsigned)(end - start);
        Erase(pos, length);
        return Begin() + pos;
    }
    bool Remove(const T& value)
    {
        Iterator i = Find(value);
        if (i != End())
        {
            Erase(i);
            return true;
        }
        else
            return false;
    }
    bool RemoveSwap(const T& value)
    {
        Iterator i = Find(value);
        if (i != End())
        {
            EraseSwap(i - Begin());
            return true;
        }
        else
            return false;
    }
    void Clear() { Resize(0); }
    void Resize(unsigned newSize) { Vector<T> tempBuffer; Resize(newSize, 0, tempBuffer); }
    void Resize(unsigned newSize, const T& value)
    {
        unsigned oldSize = Size();
        Vector<T> tempBuffer;
        Resize(newSize, 0, tempBuffer);
        for (unsigned i = oldSize; i < newSize; ++i)
            At(i) = value;
    }
    void Reserve(unsigned newCapacity)
    {
        if (newCapacity < size_)
            newCapacity = size_;
        if (newCapacity != capacity_)
        {
            T* newBuffer = 0;
            capacity_ = newCapacity;
            if (capacity_)
            {
                newBuffer = reinterpret_cast<T*>(AllocateBuffer((unsigned)(capacity_ * sizeof(T))));
                ConstructElements(newBuffer, Buffer(), size_);
            }
            DestructElements(Buffer(), size_);
            delete[] buffer_;
            buffer_ = reinterpret_cast<unsigned char*>(newBuffer);
        }
    }
    void Compact() { Reserve(size_); }
    Iterator Find(const T& value)
    {
        Iterator it = Begin();
        while (it != End() && *it != value)
            ++it;
        return it;
    }
    ConstIterator Find(const T& value) const
    {
        ConstIterator it = Begin();
        while (it != End() && *it != value)
            ++it;
        return it;
    }
    Iterator FindLast(const T& value)
    {
        if (!Size())
            return End();
        for (Iterator it = --End(); it != Begin(); ++it)
            if (*it == value)
                return it;
        if (Front() == value)
            return Begin();
        return End();
    }
    ConstIterator FindLast(const T& value) const
    {
        if (!Size())
            return End();
        for (ConstIterator it = --End(); it != Begin(); ++it)
            if (*it == value)
                return it;
        if (Front() == value)
            return Begin();
        return End();
    }
    unsigned IndexOf(const T& value) const
    {
        return Find(value) - Begin();
    }
    bool Contains(const T& value) const { return Find(value) != End(); }
    Iterator Begin() { return Iterator(Buffer()); }
    ConstIterator Begin() const { return ConstIterator(Buffer()); }
    Iterator End() { return Iterator(Buffer() + size_); }
    ConstIterator End() const { return ConstIterator(Buffer() + size_); }
    T& Front()
    {
        ((size_) ? static_cast<void> (0) : __assert_fail ("size_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/../Container/Vector.h", 462, __PRETTY_FUNCTION__));
        return Buffer()[0];
    }
    const T& Front() const
    {
        ((size_) ? static_cast<void> (0) : __assert_fail ("size_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/../Container/Vector.h", 469, __PRETTY_FUNCTION__));
        return Buffer()[0];
    }
    T& Back()
    {
        ((size_) ? static_cast<void> (0) : __assert_fail ("size_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/../Container/Vector.h", 476, __PRETTY_FUNCTION__));
        return Buffer()[size_ - 1];
    }
    const T& Back() const
    {
        ((size_) ? static_cast<void> (0) : __assert_fail ("size_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/../Container/Vector.h", 483, __PRETTY_FUNCTION__));
        return Buffer()[size_ - 1];
    }
    unsigned Size() const { return size_; }
    unsigned Capacity() const { return capacity_; }
    bool Empty() const { return size_ == 0; }
    T* Buffer() const { return reinterpret_cast<T*>(buffer_); }
private:
    void Resize(unsigned newSize, const T* src, Vector<T>& tempBuffer)
    {
        if (newSize < size_)
            DestructElements(Buffer() + newSize, size_ - newSize);
        else
        {
            if (newSize > capacity_)
            {
                Swap(tempBuffer);
                size_ = tempBuffer.size_;
                capacity_ = tempBuffer.capacity_;
                if (!capacity_)
                    capacity_ = newSize;
                else
                {
                    while (capacity_ < newSize)
                        capacity_ += (capacity_ + 1) >> 1;
                }
                buffer_ = AllocateBuffer((unsigned)(capacity_ * sizeof(T)));
                if (tempBuffer.Buffer())
                {
                    ConstructElements(Buffer(), tempBuffer.Buffer(), size_);
                }
            }
            ConstructElements(Buffer() + size_, src, newSize - size_);
        }
        size_ = newSize;
    }
    template <typename RandomIteratorT>
    Iterator InsertElements(unsigned pos, RandomIteratorT start, RandomIteratorT end)
    {
        ((start <= end) ? static_cast<void> (0) : __assert_fail ("start <= end", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/../Container/Vector.h", 541, __PRETTY_FUNCTION__));
        if (pos > size_)
            pos = size_;
        unsigned length = (unsigned)(end - start);
        Vector<T> tempBuffer;
        Resize(size_ + length, 0, tempBuffer);
        MoveRange(pos + length, pos, size_ - pos - length);
        T* destPtr = Buffer() + pos;
        for (RandomIteratorT it = start; it != end; ++it)
            *destPtr++ = *it;
        return Begin() + pos;
    }
    void MoveRange(unsigned dest, unsigned src, unsigned count)
    {
        T* buffer = Buffer();
        if (src < dest)
        {
            for (unsigned i = count - 1; i < count; --i)
                buffer[dest + i] = buffer[src + i];
        }
        if (src > dest)
        {
            for (unsigned i = 0; i < count; ++i)
                buffer[dest + i] = buffer[src + i];
        }
    }
    static void ConstructElements(T* dest, const T* src, unsigned count)
    {
        if (!src)
        {
            for (unsigned i = 0; i < count; ++i)
                new(dest + i) T();
        }
        else
        {
            for (unsigned i = 0; i < count; ++i)
                new(dest + i) T(*(src + i));
        }
    }
    static void CopyElements(T* dest, const T* src, unsigned count)
    {
        while (count--)
            *dest++ = *src++;
    }
    static void DestructElements(T* dest, unsigned count)
    {
        while (count--)
        {
            dest->~T();
            ++dest;
        }
    }
};
template <class T> class PODVector : public VectorBase
{
public:
    typedef T ValueType;
    typedef RandomAccessIterator<T> Iterator;
    typedef RandomAccessConstIterator<T> ConstIterator;
    PODVector()
    {
    }
    explicit PODVector(unsigned size)
    {
        Resize(size);
    }
    PODVector(unsigned size, const T& value)
    {
        Resize(size);
        for (unsigned i = 0; i < size; ++i)
            At(i) = value;
    }
    PODVector(const T* data, unsigned size)
    {
        Resize(size);
        CopyElements(Buffer(), data, size);
    }
    PODVector(const PODVector<T>& vector)
    {
        *this = vector;
    }
    ~PODVector()
    {
        delete[] buffer_;
    }
    PODVector<T>& operator =(const PODVector<T>& rhs)
    {
        if (&rhs != this)
        {
            Resize(rhs.size_);
            CopyElements(Buffer(), rhs.Buffer(), rhs.size_);
        }
        return *this;
    }
    PODVector<T>& operator +=(const T& rhs)
    {
        Push(rhs);
        return *this;
    }
    PODVector<T>& operator +=(const PODVector<T>& rhs)
    {
        Push(rhs);
        return *this;
    }
    PODVector<T> operator +(const T& rhs) const
    {
        PODVector<T> ret(*this);
        ret.Push(rhs);
        return ret;
    }
    PODVector<T> operator +(const PODVector<T>& rhs) const
    {
        PODVector<T> ret(*this);
        ret.Push(rhs);
        return ret;
    }
    bool operator ==(const PODVector<T>& rhs) const
    {
        if (rhs.size_ != size_)
            return false;
        T* buffer = Buffer();
        T* rhsBuffer = rhs.Buffer();
        for (unsigned i = 0; i < size_; ++i)
        {
            if (buffer[i] != rhsBuffer[i])
                return false;
        }
        return true;
    }
    bool operator !=(const PODVector<T>& rhs) const
    {
        if (rhs.size_ != size_)
            return true;
        T* buffer = Buffer();
        T* rhsBuffer = rhs.Buffer();
        for (unsigned i = 0; i < size_; ++i)
        {
            if (buffer[i] != rhsBuffer[i])
                return true;
        }
        return false;
    }
    T& operator [](unsigned index)
    {
        ((index < size_) ? static_cast<void> (0) : __assert_fail ("index < size_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/../Container/Vector.h", 740, __PRETTY_FUNCTION__));
        return Buffer()[index];
    }
    const T& operator [](unsigned index) const
    {
        ((index < size_) ? static_cast<void> (0) : __assert_fail ("index < size_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/../Container/Vector.h", 747, __PRETTY_FUNCTION__));
        return Buffer()[index];
    }
    T& At(unsigned index)
    {
        ((index < size_) ? static_cast<void> (0) : __assert_fail ("index < size_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/../Container/Vector.h", 754, __PRETTY_FUNCTION__));
        return Buffer()[index];
    }
    const T& At(unsigned index) const
    {
        ((index < size_) ? static_cast<void> (0) : __assert_fail ("index < size_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/../Container/Vector.h", 761, __PRETTY_FUNCTION__));
        return Buffer()[index];
    }
    void Push(const T& value)
    {
        if (size_ < capacity_)
            ++size_;
        else
            Resize(size_ + 1);
        Back() = value;
    }
    void Push(const PODVector<T>& vector)
    {
        unsigned oldSize = size_;
        Resize(size_ + vector.size_);
        CopyElements(Buffer() + oldSize, vector.Buffer(), vector.size_);
    }
    void Pop()
    {
        if (size_)
            Resize(size_ - 1);
    }
    void Insert(unsigned pos, const T& value)
    {
        if (pos > size_)
            pos = size_;
        unsigned oldSize = size_;
        Resize(size_ + 1);
        MoveRange(pos + 1, pos, oldSize - pos);
        Buffer()[pos] = value;
    }
    void Insert(unsigned pos, const PODVector<T>& vector)
    {
        if (pos > size_)
            pos = size_;
        unsigned oldSize = size_;
        Resize(size_ + vector.size_);
        MoveRange(pos + vector.size_, pos, oldSize - pos);
        CopyElements(Buffer() + pos, vector.Buffer(), vector.size_);
    }
    Iterator Insert(const Iterator& dest, const T& value)
    {
        unsigned pos = (unsigned)(dest - Begin());
        if (pos > size_)
            pos = size_;
        Insert(pos, value);
        return Begin() + pos;
    }
    Iterator Insert(const Iterator& dest, const PODVector<T>& vector)
    {
        unsigned pos = (unsigned)(dest - Begin());
        if (pos > size_)
            pos = size_;
        Insert(pos, vector);
        return Begin() + pos;
    }
    Iterator Insert(const Iterator& dest, const ConstIterator& start, const ConstIterator& end)
    {
        unsigned pos = (unsigned)(dest - Begin());
        if (pos > size_)
            pos = size_;
        unsigned length = (unsigned)(end - start);
        Resize(size_ + length);
        MoveRange(pos + length, pos, size_ - pos - length);
        CopyElements(Buffer() + pos, &(*start), length);
        return Begin() + pos;
    }
    Iterator Insert(const Iterator& dest, const T* start, const T* end)
    {
        unsigned pos = (unsigned)(dest - Begin());
        if (pos > size_)
            pos = size_;
        unsigned length = (unsigned)(end - start);
        Resize(size_ + length);
        MoveRange(pos + length, pos, size_ - pos - length);
        T* destPtr = Buffer() + pos;
        for (const T* i = start; i != end; ++i)
            *destPtr++ = *i;
        return Begin() + pos;
    }
    void Erase(unsigned pos, unsigned length = 1)
    {
        if (!length || pos + length > size_)
            return;
        MoveRange(pos, pos + length, size_ - pos - length);
        Resize(size_ - length);
    }
    Iterator Erase(const Iterator& it)
    {
        unsigned pos = (unsigned)(it - Begin());
        if (pos >= size_)
            return End();
        Erase(pos);
        return Begin() + pos;
    }
    Iterator Erase(const Iterator& start, const Iterator& end)
    {
        unsigned pos = (unsigned)(start - Begin());
        if (pos >= size_)
            return End();
        unsigned length = (unsigned)(end - start);
        Erase(pos, length);
        return Begin() + pos;
    }
    void EraseSwap(unsigned pos, unsigned length = 1)
    {
        unsigned shiftStartIndex = pos + length;
        if (shiftStartIndex > size_ || !length)
            return;
        unsigned newSize = size_ - length;
        unsigned trailingCount = size_ - shiftStartIndex;
        if (trailingCount <= length)
        {
            MoveRange(pos, shiftStartIndex, trailingCount);
        }
        else
        {
            CopyElements(Buffer() + pos, Buffer() + newSize, length);
        }
        Resize(newSize);
    }
    bool Remove(const T& value)
    {
        Iterator i = Find(value);
        if (i != End())
        {
            Erase(i);
            return true;
        }
        else
            return false;
    }
    bool RemoveSwap(const T& value)
    {
        Iterator i = Find(value);
        if (i != End())
        {
            EraseSwap(i - Begin());
            return true;
        }
        else
            return false;
    }
    void Clear() { Resize(0); }
    void Resize(unsigned newSize)
    {
        if (newSize > capacity_)
        {
            if (!capacity_)
                capacity_ = newSize;
            else
            {
                while (capacity_ < newSize)
                    capacity_ += (capacity_ + 1) >> 1;
            }
            unsigned char* newBuffer = AllocateBuffer((unsigned)(capacity_ * sizeof(T)));
            if (buffer_)
            {
                CopyElements(reinterpret_cast<T*>(newBuffer), Buffer(), size_);
                delete[] buffer_;
            }
            buffer_ = newBuffer;
        }
        size_ = newSize;
    }
    void Reserve(unsigned newCapacity)
    {
        if (newCapacity < size_)
            newCapacity = size_;
        if (newCapacity != capacity_)
        {
            unsigned char* newBuffer = 0;
            capacity_ = newCapacity;
            if (capacity_)
            {
                newBuffer = AllocateBuffer((unsigned)(capacity_ * sizeof(T)));
                CopyElements(reinterpret_cast<T*>(newBuffer), Buffer(), size_);
            }
            delete[] buffer_;
            buffer_ = newBuffer;
        }
    }
    void Compact() { Reserve(size_); }
    Iterator Find(const T& value)
    {
        Iterator it = Begin();
        while (it != End() && *it != value)
            ++it;
        return it;
    }
    ConstIterator Find(const T& value) const
    {
        ConstIterator it = Begin();
        while (it != End() && *it != value)
            ++it;
        return it;
    }
    Iterator FindLast(const T& value)
    {
        if (!Size())
            return End();
        for (Iterator it = --End(); it != Begin(); ++it)
            if (*it == value)
                return it;
        if (Front() == value)
            return Begin();
        return End();
    }
    ConstIterator FindLast(const T& value) const
    {
        if (!Size())
            return End();
        for (ConstIterator it = --End(); it != Begin(); ++it)
            if (*it == value)
                return it;
        if (Front() == value)
            return Begin();
        return End();
    }
    unsigned IndexOf(const T& value) const
    {
        return Find(value) - Begin();
    }
    bool Contains(const T& value) const { return Find(value) != End(); }
    Iterator Begin() { return Iterator(Buffer()); }
    ConstIterator Begin() const { return ConstIterator(Buffer()); }
    Iterator End() { return Iterator(Buffer() + size_); }
    ConstIterator End() const { return ConstIterator(Buffer() + size_); }
    T& Front() { return Buffer()[0]; }
    const T& Front() const { return Buffer()[0]; }
    T& Back()
    {
        ((size_) ? static_cast<void> (0) : __assert_fail ("size_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/../Container/Vector.h", 1080, __PRETTY_FUNCTION__));
        return Buffer()[size_ - 1];
    }
    const T& Back() const
    {
        ((size_) ? static_cast<void> (0) : __assert_fail ("size_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/../Container/Vector.h", 1087, __PRETTY_FUNCTION__));
        return Buffer()[size_ - 1];
    }
    unsigned Size() const { return size_; }
    unsigned Capacity() const { return capacity_; }
    bool Empty() const { return size_ == 0; }
    T* Buffer() const { return reinterpret_cast<T*>(buffer_); }
private:
    void MoveRange(unsigned dest, unsigned src, unsigned count)
    {
        if (count)
            memmove(Buffer() + dest, Buffer() + src, count * sizeof(T));
    }
    static void CopyElements(T* dest, const T* src, unsigned count)
    {
        if (count)
            memcpy(dest, src, count * sizeof(T));
    }
};
template <class T> typename Urho3D::Vector<T>::ConstIterator begin(const Urho3D::Vector<T>& v) { return v.Begin(); }
template <class T> typename Urho3D::Vector<T>::ConstIterator end(const Urho3D::Vector<T>& v) { return v.End(); }
template <class T> typename Urho3D::Vector<T>::Iterator begin(Urho3D::Vector<T>& v) { return v.Begin(); }
template <class T> typename Urho3D::Vector<T>::Iterator end(Urho3D::Vector<T>& v) { return v.End(); }
template <class T> typename Urho3D::PODVector<T>::ConstIterator begin(const Urho3D::PODVector<T>& v) { return v.Begin(); }
template <class T> typename Urho3D::PODVector<T>::ConstIterator end(const Urho3D::PODVector<T>& v) { return v.End(); }
template <class T> typename Urho3D::PODVector<T>::Iterator begin(Urho3D::PODVector<T>& v) { return v.Begin(); }
template <class T> typename Urho3D::PODVector<T>::Iterator end(Urho3D::PODVector<T>& v) { return v.End(); }
}
       
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
namespace std
{
  using ::va_list;
}
       
       
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void * __timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
extern "C" {
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
extern const unsigned short int **__ctype_b_loc (void)
     throw () __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     throw () __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     throw () __attribute__ ((__const__));

extern int isalnum (int) throw ();
extern int isalpha (int) throw ();
extern int iscntrl (int) throw ();
extern int isdigit (int) throw ();
extern int islower (int) throw ();
extern int isgraph (int) throw ();
extern int isprint (int) throw ();
extern int ispunct (int) throw ();
extern int isspace (int) throw ();
extern int isupper (int) throw ();
extern int isxdigit (int) throw ();
extern int tolower (int __c) throw ();
extern int toupper (int __c) throw ();


extern int isblank (int) throw ();

extern int isctype (int __c, int __mask) throw ();
extern int isascii (int __c) throw ();
extern int toascii (int __c) throw ();
extern int _toupper (int) throw ();
extern int _tolower (int) throw ();
extern int isalnum_l (int, __locale_t) throw ();
extern int isalpha_l (int, __locale_t) throw ();
extern int iscntrl_l (int, __locale_t) throw ();
extern int isdigit_l (int, __locale_t) throw ();
extern int islower_l (int, __locale_t) throw ();
extern int isgraph_l (int, __locale_t) throw ();
extern int isprint_l (int, __locale_t) throw ();
extern int ispunct_l (int, __locale_t) throw ();
extern int isspace_l (int, __locale_t) throw ();
extern int isupper_l (int, __locale_t) throw ();
extern int isxdigit_l (int, __locale_t) throw ();
extern int isblank_l (int, __locale_t) throw ();
extern int __tolower_l (int __c, __locale_t __l) throw ();
extern int tolower_l (int __c, __locale_t __l) throw ();
extern int __toupper_l (int __c, __locale_t __l) throw ();
extern int toupper_l (int __c, __locale_t __l) throw ();
}
namespace std
{
  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;
}
namespace std
{
  using ::isblank;
}
namespace Urho3D
{
static const int CONVERSION_BUFFER_LENGTH = 128;
static const int MATRIX_CONVERSION_BUFFER_LENGTH = 256;
class WString;
class String
{
public:
    typedef RandomAccessIterator<char> Iterator;
    typedef RandomAccessConstIterator<char> ConstIterator;
    String() :
        length_(0),
        capacity_(0),
        buffer_(&endZero)
    {
    }
    String(const String& str) :
        length_(0),
        capacity_(0),
        buffer_(&endZero)
    {
        *this = str;
    }
    String(const char* str) :
        length_(0),
        capacity_(0),
        buffer_(&endZero)
    {
        *this = str;
    }
    String(char* str) :
        length_(0),
        capacity_(0),
        buffer_(&endZero)
    {
        *this = (const char*)str;
    }
    String(const char* str, unsigned length) :
        length_(0),
        capacity_(0),
        buffer_(&endZero)
    {
        Resize(length);
        CopyChars(buffer_, str, length);
    }
    String(const wchar_t* str) :
        length_(0),
        capacity_(0),
        buffer_(&endZero)
    {
        SetUTF8FromWChar(str);
    }
    String(wchar_t* str) :
        length_(0),
        capacity_(0),
        buffer_(&endZero)
    {
        SetUTF8FromWChar(str);
    }
    String(const WString& str);
    explicit String(int value);
    explicit String(short value);
    explicit String(long value);
    explicit String(long long value);
    explicit String(unsigned value);
    explicit String(unsigned short value);
    explicit String(unsigned long value);
    explicit String(unsigned long long value);
    explicit String(float value);
    explicit String(double value);
    explicit String(bool value);
    explicit String(char value);
    explicit String(char value, unsigned length);
    template <class T> explicit String(const T& value) :
        length_(0),
        capacity_(0),
        buffer_(&endZero)
    {
        *this = value.ToString();
    }
    ~String()
    {
        if (capacity_)
            delete[] buffer_;
    }
    String& operator =(const String& rhs)
    {
        Resize(rhs.length_);
        CopyChars(buffer_, rhs.buffer_, rhs.length_);
        return *this;
    }
    String& operator =(const char* rhs)
    {
        unsigned rhsLength = CStringLength(rhs);
        Resize(rhsLength);
        CopyChars(buffer_, rhs, rhsLength);
        return *this;
    }
    String& operator +=(const String& rhs)
    {
        unsigned oldLength = length_;
        Resize(length_ + rhs.length_);
        CopyChars(buffer_ + oldLength, rhs.buffer_, rhs.length_);
        return *this;
    }
    String& operator +=(const char* rhs)
    {
        unsigned rhsLength = CStringLength(rhs);
        unsigned oldLength = length_;
        Resize(length_ + rhsLength);
        CopyChars(buffer_ + oldLength, rhs, rhsLength);
        return *this;
    }
    String& operator +=(char rhs)
    {
        unsigned oldLength = length_;
        Resize(length_ + 1);
        buffer_[oldLength] = rhs;
        return *this;
    }
    String& operator +=(int rhs);
    String& operator +=(short rhs);
    String& operator +=(long rhs);
    String& operator +=(long long rhs);
    String& operator +=(unsigned rhs);
    String& operator +=(unsigned short rhs);
    String& operator +=(unsigned long rhs);
    String& operator +=(unsigned long long rhs);
    String& operator +=(float rhs);
    String& operator +=(bool rhs);
    template <class T> String operator +=(const T& rhs) { return *this += rhs.ToString(); }
    String operator +(const String& rhs) const
    {
        String ret;
        ret.Resize(length_ + rhs.length_);
        CopyChars(ret.buffer_, buffer_, length_);
        CopyChars(ret.buffer_ + length_, rhs.buffer_, rhs.length_);
        return ret;
    }
    String operator +(const char* rhs) const
    {
        unsigned rhsLength = CStringLength(rhs);
        String ret;
        ret.Resize(length_ + rhsLength);
        CopyChars(ret.buffer_, buffer_, length_);
        CopyChars(ret.buffer_ + length_, rhs, rhsLength);
        return ret;
    }
    bool operator ==(const String& rhs) const { return strcmp(CString(), rhs.CString()) == 0; }
    bool operator !=(const String& rhs) const { return strcmp(CString(), rhs.CString()) != 0; }
    bool operator <(const String& rhs) const { return strcmp(CString(), rhs.CString()) < 0; }
    bool operator >(const String& rhs) const { return strcmp(CString(), rhs.CString()) > 0; }
    bool operator ==(const char* rhs) const { return strcmp(CString(), rhs) == 0; }
    bool operator !=(const char* rhs) const { return strcmp(CString(), rhs) != 0; }
    bool operator <(const char* rhs) const { return strcmp(CString(), rhs) < 0; }
    bool operator >(const char* rhs) const { return strcmp(CString(), rhs) > 0; }
    char& operator [](unsigned index)
    {
        ((index < length_) ? static_cast<void> (0) : __assert_fail ("index < length_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/Str.h", 279, __PRETTY_FUNCTION__));
        return buffer_[index];
    }
    const char& operator [](unsigned index) const
    {
        ((index < length_) ? static_cast<void> (0) : __assert_fail ("index < length_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/Str.h", 286, __PRETTY_FUNCTION__));
        return buffer_[index];
    }
    char& At(unsigned index)
    {
        ((index < length_) ? static_cast<void> (0) : __assert_fail ("index < length_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/Str.h", 293, __PRETTY_FUNCTION__));
        return buffer_[index];
    }
    const char& At(unsigned index) const
    {
        ((index < length_) ? static_cast<void> (0) : __assert_fail ("index < length_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/Str.h", 300, __PRETTY_FUNCTION__));
        return buffer_[index];
    }
    void Replace(char replaceThis, char replaceWith, bool caseSensitive = true);
    void Replace(const String& replaceThis, const String& replaceWith, bool caseSensitive = true);
    void Replace(unsigned pos, unsigned length, const String& replaceWith);
    void Replace(unsigned pos, unsigned length, const char* replaceWith);
    Iterator Replace(const Iterator& start, const Iterator& end, const String& replaceWith);
    String Replaced(char replaceThis, char replaceWith, bool caseSensitive = true) const;
    String Replaced(const String& replaceThis, const String& replaceWith, bool caseSensitive = true) const;
    String& Append(const String& str);
    String& Append(const char* str);
    String& Append(char c);
    String& Append(const char* str, unsigned length);
    void Insert(unsigned pos, const String& str);
    void Insert(unsigned pos, char c);
    Iterator Insert(const Iterator& dest, const String& str);
    Iterator Insert(const Iterator& dest, const Iterator& start, const Iterator& end);
    Iterator Insert(const Iterator& dest, char c);
    void Erase(unsigned pos, unsigned length = 1);
    Iterator Erase(const Iterator& it);
    Iterator Erase(const Iterator& start, const Iterator& end);
    void Resize(unsigned newLength);
    void Reserve(unsigned newCapacity);
    void Compact();
    void Clear();
    void Swap(String& str);
    Iterator Begin() { return Iterator(buffer_); }
    ConstIterator Begin() const { return ConstIterator(buffer_); }
    Iterator End() { return Iterator(buffer_ + length_); }
    ConstIterator End() const { return ConstIterator(buffer_ + length_); }
    char Front() const { return buffer_[0]; }
    char Back() const { return length_ ? buffer_[length_ - 1] : buffer_[0]; }
    String Substring(unsigned pos) const;
    String Substring(unsigned pos, unsigned length) const;
    String Trimmed() const;
    String ToUpper() const;
    String ToLower() const;
    Vector<String> Split(char separator, bool keepEmptyStrings = false) const;
    void Join(const Vector<String>& subStrings, const String& glue);
    unsigned Find(const String& str, unsigned startPos = 0, bool caseSensitive = true) const;
    unsigned Find(char c, unsigned startPos = 0, bool caseSensitive = true) const;
    unsigned FindLast(const String& str, unsigned startPos = NPOS, bool caseSensitive = true) const;
    unsigned FindLast(char c, unsigned startPos = NPOS, bool caseSensitive = true) const;
    bool StartsWith(const String& str, bool caseSensitive = true) const;
    bool EndsWith(const String& str, bool caseSensitive = true) const;
    const char* CString() const { return buffer_; }
    unsigned Length() const { return length_; }
    unsigned Capacity() const { return capacity_; }
    bool Empty() const { return length_ == 0; }
    int Compare(const String& str, bool caseSensitive = true) const;
    int Compare(const char* str, bool caseSensitive = true) const;
    bool Contains(const String& str, bool caseSensitive = true) const { return Find(str, 0, caseSensitive) != NPOS; }
    bool Contains(char c, bool caseSensitive = true) const { return Find(c, 0, caseSensitive) != NPOS; }
    void SetUTF8FromLatin1(const char* str);
    void SetUTF8FromWChar(const wchar_t* str);
    unsigned LengthUTF8() const;
    unsigned ByteOffsetUTF8(unsigned index) const;
    unsigned NextUTF8Char(unsigned& byteOffset) const;
    unsigned AtUTF8(unsigned index) const;
    void ReplaceUTF8(unsigned index, unsigned unicodeChar);
    String& AppendUTF8(unsigned unicodeChar);
    String SubstringUTF8(unsigned pos) const;
    String SubstringUTF8(unsigned pos, unsigned length) const;
    unsigned ToHash() const
    {
        unsigned hash = 0;
        const char* ptr = buffer_;
        while (*ptr)
        {
            hash = *ptr + (hash << 6) + (hash << 16) - hash;
            ++ptr;
        }
        return hash;
    }
    static Vector<String> Split(const char* str, char separator, bool keepEmptyStrings = false);
    static String Joined(const Vector<String>& subStrings, const String& glue);
    static void EncodeUTF8(char*& dest, unsigned unicodeChar);
    static unsigned DecodeUTF8(const char*& src);
    static unsigned CStringLength(const char* str) { return str ? (unsigned)strlen(str) : 0; }
    String& AppendWithFormat(const char* formatString, ...);
    String& AppendWithFormatArgs(const char* formatString, va_list args);
    static int Compare(const char* str1, const char* str2, bool caseSensitive);
    static const unsigned NPOS = 0xffffffff;
    static const unsigned MIN_CAPACITY = 8;
    static const String EMPTY;
private:
    void MoveRange(unsigned dest, unsigned src, unsigned count)
    {
        if (count)
            memmove(buffer_ + dest, buffer_ + src, count);
    }
    static void CopyChars(char* dest, const char* src, unsigned count)
    {
        char* end = dest + count;
        while (dest != end)
        {
            *dest = *src;
            ++dest;
            ++src;
        }
    }
    void Replace(unsigned pos, unsigned length, const char* srcStart, unsigned srcLength);
    unsigned length_;
    unsigned capacity_;
    char* buffer_;
    static char endZero;
};
inline String operator +(const char* lhs, const String& rhs)
{
    String ret(lhs);
    ret += rhs;
    return ret;
}
inline String operator +(const wchar_t* lhs, const String& rhs)
{
    String ret(lhs);
    ret += rhs;
    return ret;
}
class WString
{
public:
    WString();
    WString(const String& str);
    ~WString();
    wchar_t& operator [](unsigned index)
    {
        ((index < length_) ? static_cast<void> (0) : __assert_fail ("index < length_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/Str.h", 558, __PRETTY_FUNCTION__));
        return buffer_[index];
    }
    const wchar_t& operator [](unsigned index) const
    {
        ((index < length_) ? static_cast<void> (0) : __assert_fail ("index < length_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/Str.h", 565, __PRETTY_FUNCTION__));
        return buffer_[index];
    }
    wchar_t& At(unsigned index)
    {
        ((index < length_) ? static_cast<void> (0) : __assert_fail ("index < length_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/Str.h", 572, __PRETTY_FUNCTION__));
        return buffer_[index];
    }
    const wchar_t& At(unsigned index) const
    {
        ((index < length_) ? static_cast<void> (0) : __assert_fail ("index < length_", "/home/nathan/Projects/Urho/Urho3D/Build/include/Urho3D/Math/../Math/../Math/../Math/../Math/../Container/Str.h", 579, __PRETTY_FUNCTION__));
        return buffer_[index];
    }
    void Resize(unsigned newLength);
    bool Empty() const { return length_ == 0; }
    unsigned Length() const { return length_; }
    const wchar_t* CString() const { return buffer_; }
private:
    unsigned length_;
    wchar_t* buffer_;
};
}
       
       
namespace Urho3D
{
 void SetRandomSeed(unsigned seed);
 unsigned GetRandomSeed();
 int Rand();
 float RandStandardNormal();
}
       
extern "C" {
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
union wait
  {
    int w_status;
    struct
      {
 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;
      } __wait_terminated;
    struct
      {
 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;
      } __wait_stopped;
  };

typedef struct
  {
    int quot;
    int rem;
  } div_t;
typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;


__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;

extern size_t __ctype_get_mb_cur_max (void) throw () ;

extern double atof (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
extern int atoi (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
extern long int atol (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;


__extension__ extern long long int atoll (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;


extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));


extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1)));
extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));


extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));
extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));
__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));
__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4)));
extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));
__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));
__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));
extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));
extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));
extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));
extern char *l64a (long int __n) throw () ;
extern long int a64l (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
extern "C" {
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __ino64_t ino64_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __off64_t off64_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;

typedef __clock_t clock_t;



typedef __time_t time_t;


typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef __useconds_t useconds_t;
typedef __suseconds_t suseconds_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));
typedef int register_t __attribute__ ((__mode__ (__word__)));
typedef int __sig_atomic_t;
typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
typedef __sigset_t sigset_t;
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
typedef long int __fd_mask;
typedef struct
  {
    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];
  } fd_set;
typedef __fd_mask fd_mask;
extern "C" {
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
}
extern "C" {
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw () __attribute__ ((__const__));
}
typedef __blksize_t blksize_t;
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
typedef unsigned long int pthread_t;
union pthread_attr_t
{
  char __size[56];
  long int __align;
};
typedef union pthread_attr_t pthread_attr_t;
typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    short __spins;
    short __elision;
    __pthread_list_t __list;
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;
typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
typedef union
{
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    signed char __rwelision;
    unsigned char __pad1[7];
    unsigned long int __pad2;
    unsigned int __flags;
  } __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;
typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
}
extern long int random (void) throw ();
extern void srandom (unsigned int __seed) throw ();
extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));
extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));
struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };
extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));
extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));
extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern int rand (void) throw ();
extern void srand (unsigned int __seed) throw ();

extern int rand_r (unsigned int *__seed) throw ();
extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));
extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));
struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;
  };
extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));
extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;
extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;


extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));
extern void free (void *__ptr) throw ();

extern void cfree (void *__ptr) throw ();
extern "C" {
extern void *alloca (size_t __size) throw ();
}
extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;
extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern void *aligned_alloc (size_t __alignment, size_t __size)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;

extern void abort (void) throw () __attribute__ ((__noreturn__));
extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));
extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));

extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));

extern void exit (int __status) throw () __attribute__ ((__noreturn__));
extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));


extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));


extern char *getenv (const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;

extern char *secure_getenv (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));
extern int setenv (const char *__name, const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));
extern int unsetenv (const char *__name) throw () __attribute__ ((__nonnull__ (1)));
extern int clearenv (void) throw ();
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1)));
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;

extern int system (const char *__command) ;

extern char *canonicalize_file_name (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) throw () ;
typedef int (*__compar_fn_t) (const void *, const void *);
typedef __compar_fn_t comparison_fn_t;
typedef int (*__compar_d_fn_t) (const void *, const void *, void *);

extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;
extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));
extern int abs (int __x) throw () __attribute__ ((__const__)) ;
extern long int labs (long int __x) throw () __attribute__ ((__const__)) ;

__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) ;

extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) ;

extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;
extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;
extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));

extern int mblen (const char *__s, size_t __n) throw ();
extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) throw ();
extern int wctomb (char *__s, wchar_t __wchar) throw ();
extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) throw ();
extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     throw ();

extern int rpmatch (const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;
extern void setkey (const char *__key) throw () __attribute__ ((__nonnull__ (1)));
extern int posix_openpt (int __oflag) ;
extern int grantpt (int __fd) throw ();
extern int unlockpt (int __fd) throw ();
extern char *ptsname (int __fd) throw () ;
extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));
extern int getpt (void);
extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));
}
namespace std __attribute__ ((__visibility__ ("default")))
{

  using ::div_t;
  using ::ldiv_t;
  using ::abort;
  using ::abs;
  using ::atexit;
  using ::at_quick_exit;
  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  using ::calloc;
  using ::div;
  using ::exit;
  using ::free;
  using ::getenv;
  using ::labs;
  using ::ldiv;
  using ::malloc;
  using ::mblen;
  using ::mbstowcs;
  using ::mbtowc;
  using ::qsort;
  using ::quick_exit;
  using ::rand;
  using ::realloc;
  using ::srand;
  using ::strtod;
  using ::strtol;
  using ::strtoul;
  using ::system;
  using ::wcstombs;
  using ::wctomb;
  inline long
  abs(long __i) { return __builtin_labs(__i); }
  inline ldiv_t
  div(long __i, long __j) { return ldiv(__i, __j); }
  inline long long
  abs(long long __x) { return __builtin_llabs (__x); }

}
namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{

  using ::lldiv_t;
  using ::_Exit;
  using ::llabs;
  inline lldiv_t
  div(long long __n, long long __d)
  { lldiv_t __q; __q.quot = __n / __d; __q.rem = __n % __d; return __q; }
  using ::lldiv;
  using ::atoll;
  using ::strtoll;
  using ::strtoull;
  using ::strtof;
  using ::strtold;

}
namespace std
{
  using ::__gnu_cxx::lldiv_t;
  using ::__gnu_cxx::_Exit;
  using ::__gnu_cxx::llabs;
  using ::__gnu_cxx::div;
  using ::__gnu_cxx::lldiv;
  using ::__gnu_cxx::atoll;
  using ::__gnu_cxx::strtof;
  using ::__gnu_cxx::strtoll;
  using ::__gnu_cxx::strtoull;
  using ::__gnu_cxx::strtold;
}
       
       
namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{

  template<typename _Iterator, typename _Container>
    class __normal_iterator;

}
namespace std __attribute__ ((__visibility__ ("default")))
{

  struct __true_type { };
  struct __false_type { };
  template<bool>
    struct __truth_type
    { typedef __false_type __type; };
  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };
  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };
  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_integer<char16_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_integer<char32_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<typename _Tp>
    struct __is_normal_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
  template<typename _Iterator, typename _Container>
    struct __is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator,
             _Container> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };
  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };
  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
  template<typename _Iterator>
    class move_iterator;
  template<typename _Iterator>
    struct __is_move_iterator< move_iterator<_Iterator> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

}
       
namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{

  template<bool, typename>
    struct __enable_if
    { };
  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };
  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };
  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };
  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;
    public:
      typedef typename __if_type::__type __type;
    };
  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };
  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };
  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };
  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };
  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };
  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };
  template<>
    struct __add_unsigned<bool>;
  template<>
    struct __add_unsigned<wchar_t>;
  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;
    public:
      typedef typename __if_type::__type __type;
    };
  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };
  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };
  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };
  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };
  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };
  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };
  template<>
    struct __remove_unsigned<bool>;
  template<>
    struct __remove_unsigned<wchar_t>;
  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }
  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }
  inline bool
  __is_null_pointer(std::nullptr_t)
  { return true; }
  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };
  template<typename _Tp>
    struct __promote<_Tp, false>
    { };
  template<>
    struct __promote<long double>
    { typedef long double __type; };
  template<>
    struct __promote<double>
    { typedef double __type; };
  template<>
    struct __promote<float>
    { typedef float __type; };
  template<typename _Tp, typename _Up,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type>
    struct __promote_2
    {
      typedef __typeof__(_Tp2() + _Up2()) __type;
    };
  template<typename _Tp, typename _Up, typename _Vp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type>
    struct __promote_3
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2()) __type;
    };
  template<typename _Tp, typename _Up, typename _Vp, typename _Wp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type,
           typename _Wp2 = typename __promote<_Wp>::__type>
    struct __promote_4
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2() + _Wp2()) __type;
    };

}
extern "C" {
typedef float float_t;
typedef double double_t;

extern double acos (double __x) throw (); extern double __acos (double __x) throw ();
extern double asin (double __x) throw (); extern double __asin (double __x) throw ();
extern double atan (double __x) throw (); extern double __atan (double __x) throw ();
extern double atan2 (double __y, double __x) throw (); extern double __atan2 (double __y, double __x) throw ();
 extern double cos (double __x) throw (); extern double __cos (double __x) throw ();
 extern double sin (double __x) throw (); extern double __sin (double __x) throw ();
extern double tan (double __x) throw (); extern double __tan (double __x) throw ();
extern double cosh (double __x) throw (); extern double __cosh (double __x) throw ();
extern double sinh (double __x) throw (); extern double __sinh (double __x) throw ();
extern double tanh (double __x) throw (); extern double __tanh (double __x) throw ();

 extern void sincos (double __x, double *__sinx, double *__cosx) throw (); extern void __sincos (double __x, double *__sinx, double *__cosx) throw ();

extern double acosh (double __x) throw (); extern double __acosh (double __x) throw ();
extern double asinh (double __x) throw (); extern double __asinh (double __x) throw ();
extern double atanh (double __x) throw (); extern double __atanh (double __x) throw ();


 extern double exp (double __x) throw (); extern double __exp (double __x) throw ();
extern double frexp (double __x, int *__exponent) throw (); extern double __frexp (double __x, int *__exponent) throw ();
extern double ldexp (double __x, int __exponent) throw (); extern double __ldexp (double __x, int __exponent) throw ();
 extern double log (double __x) throw (); extern double __log (double __x) throw ();
extern double log10 (double __x) throw (); extern double __log10 (double __x) throw ();
extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw () __attribute__ ((__nonnull__ (2)));

extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();
extern double pow10 (double __x) throw (); extern double __pow10 (double __x) throw ();

extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();
extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();
extern double logb (double __x) throw (); extern double __logb (double __x) throw ();


extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();
extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();


 extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();
extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();


extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();


extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();


extern double ceil (double __x) throw () __attribute__ ((__const__)); extern double __ceil (double __x) throw () __attribute__ ((__const__));
extern double fabs (double __x) throw () __attribute__ ((__const__)); extern double __fabs (double __x) throw () __attribute__ ((__const__));
extern double floor (double __x) throw () __attribute__ ((__const__)); extern double __floor (double __x) throw () __attribute__ ((__const__));
extern double fmod (double __x, double __y) throw (); extern double __fmod (double __x, double __y) throw ();
extern int __isinf (double __value) throw () __attribute__ ((__const__));
extern int __finite (double __value) throw () __attribute__ ((__const__));

extern int finite (double __value) throw () __attribute__ ((__const__));
extern double drem (double __x, double __y) throw (); extern double __drem (double __x, double __y) throw ();
extern double significand (double __x) throw (); extern double __significand (double __x) throw ();

extern double copysign (double __x, double __y) throw () __attribute__ ((__const__)); extern double __copysign (double __x, double __y) throw () __attribute__ ((__const__));


extern double nan (const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (const char *__tagb) throw () __attribute__ ((__const__));

extern int __isnan (double __value) throw () __attribute__ ((__const__));
extern double j0 (double) throw (); extern double __j0 (double) throw ();
extern double j1 (double) throw (); extern double __j1 (double) throw ();
extern double jn (int, double) throw (); extern double __jn (int, double) throw ();
extern double y0 (double) throw (); extern double __y0 (double) throw ();
extern double y1 (double) throw (); extern double __y1 (double) throw ();
extern double yn (int, double) throw (); extern double __yn (int, double) throw ();

extern double erf (double) throw (); extern double __erf (double) throw ();
extern double erfc (double) throw (); extern double __erfc (double) throw ();
extern double lgamma (double) throw (); extern double __lgamma (double) throw ();


extern double tgamma (double) throw (); extern double __tgamma (double) throw ();

extern double gamma (double) throw (); extern double __gamma (double) throw ();
extern double lgamma_r (double, int *__signgamp) throw (); extern double __lgamma_r (double, int *__signgamp) throw ();

extern double rint (double __x) throw (); extern double __rint (double __x) throw ();
extern double nextafter (double __x, double __y) throw () __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) throw () __attribute__ ((__const__));
extern double nexttoward (double __x, long double __y) throw () __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) throw () __attribute__ ((__const__));
extern double remainder (double __x, double __y) throw (); extern double __remainder (double __x, double __y) throw ();
extern double scalbn (double __x, int __n) throw (); extern double __scalbn (double __x, int __n) throw ();
extern int ilogb (double __x) throw (); extern int __ilogb (double __x) throw ();
extern double scalbln (double __x, long int __n) throw (); extern double __scalbln (double __x, long int __n) throw ();
extern double nearbyint (double __x) throw (); extern double __nearbyint (double __x) throw ();
extern double round (double __x) throw () __attribute__ ((__const__)); extern double __round (double __x) throw () __attribute__ ((__const__));
extern double trunc (double __x) throw () __attribute__ ((__const__)); extern double __trunc (double __x) throw () __attribute__ ((__const__));
extern double remquo (double __x, double __y, int *__quo) throw (); extern double __remquo (double __x, double __y, int *__quo) throw ();
extern long int lrint (double __x) throw (); extern long int __lrint (double __x) throw ();
__extension__
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();
extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
__extension__
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();
extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();
extern double fmax (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmax (double __x, double __y) throw () __attribute__ ((__const__));
extern double fmin (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmin (double __x, double __y) throw () __attribute__ ((__const__));
extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));
extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));
extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();

extern int __issignaling (double __value) throw ()
     __attribute__ ((__const__));
extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();

extern float acosf (float __x) throw (); extern float __acosf (float __x) throw ();
extern float asinf (float __x) throw (); extern float __asinf (float __x) throw ();
extern float atanf (float __x) throw (); extern float __atanf (float __x) throw ();
extern float atan2f (float __y, float __x) throw (); extern float __atan2f (float __y, float __x) throw ();
 extern float cosf (float __x) throw (); extern float __cosf (float __x) throw ();
 extern float sinf (float __x) throw (); extern float __sinf (float __x) throw ();
extern float tanf (float __x) throw (); extern float __tanf (float __x) throw ();
extern float coshf (float __x) throw (); extern float __coshf (float __x) throw ();
extern float sinhf (float __x) throw (); extern float __sinhf (float __x) throw ();
extern float tanhf (float __x) throw (); extern float __tanhf (float __x) throw ();

 extern void sincosf (float __x, float *__sinx, float *__cosx) throw (); extern void __sincosf (float __x, float *__sinx, float *__cosx) throw ();

extern float acoshf (float __x) throw (); extern float __acoshf (float __x) throw ();
extern float asinhf (float __x) throw (); extern float __asinhf (float __x) throw ();
extern float atanhf (float __x) throw (); extern float __atanhf (float __x) throw ();


 extern float expf (float __x) throw (); extern float __expf (float __x) throw ();
extern float frexpf (float __x, int *__exponent) throw (); extern float __frexpf (float __x, int *__exponent) throw ();
extern float ldexpf (float __x, int __exponent) throw (); extern float __ldexpf (float __x, int __exponent) throw ();
 extern float logf (float __x) throw (); extern float __logf (float __x) throw ();
extern float log10f (float __x) throw (); extern float __log10f (float __x) throw ();
extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw () __attribute__ ((__nonnull__ (2)));

extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();
extern float pow10f (float __x) throw (); extern float __pow10f (float __x) throw ();

extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();
extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();
extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();


extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();
extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();


 extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();
extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();


extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();


extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();


extern float ceilf (float __x) throw () __attribute__ ((__const__)); extern float __ceilf (float __x) throw () __attribute__ ((__const__));
extern float fabsf (float __x) throw () __attribute__ ((__const__)); extern float __fabsf (float __x) throw () __attribute__ ((__const__));
extern float floorf (float __x) throw () __attribute__ ((__const__)); extern float __floorf (float __x) throw () __attribute__ ((__const__));
extern float fmodf (float __x, float __y) throw (); extern float __fmodf (float __x, float __y) throw ();
extern int __isinff (float __value) throw () __attribute__ ((__const__));
extern int __finitef (float __value) throw () __attribute__ ((__const__));

extern int isinff (float __value) throw () __attribute__ ((__const__));
extern int finitef (float __value) throw () __attribute__ ((__const__));
extern float dremf (float __x, float __y) throw (); extern float __dremf (float __x, float __y) throw ();
extern float significandf (float __x) throw (); extern float __significandf (float __x) throw ();

extern float copysignf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) throw () __attribute__ ((__const__));


extern float nanf (const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (const char *__tagb) throw () __attribute__ ((__const__));

extern int __isnanf (float __value) throw () __attribute__ ((__const__));
extern int isnanf (float __value) throw () __attribute__ ((__const__));
extern float j0f (float) throw (); extern float __j0f (float) throw ();
extern float j1f (float) throw (); extern float __j1f (float) throw ();
extern float jnf (int, float) throw (); extern float __jnf (int, float) throw ();
extern float y0f (float) throw (); extern float __y0f (float) throw ();
extern float y1f (float) throw (); extern float __y1f (float) throw ();
extern float ynf (int, float) throw (); extern float __ynf (int, float) throw ();

extern float erff (float) throw (); extern float __erff (float) throw ();
extern float erfcf (float) throw (); extern float __erfcf (float) throw ();
extern float lgammaf (float) throw (); extern float __lgammaf (float) throw ();


extern float tgammaf (float) throw (); extern float __tgammaf (float) throw ();

extern float gammaf (float) throw (); extern float __gammaf (float) throw ();
extern float lgammaf_r (float, int *__signgamp) throw (); extern float __lgammaf_r (float, int *__signgamp) throw ();

extern float rintf (float __x) throw (); extern float __rintf (float __x) throw ();
extern float nextafterf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) throw () __attribute__ ((__const__));
extern float nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__));
extern float remainderf (float __x, float __y) throw (); extern float __remainderf (float __x, float __y) throw ();
extern float scalbnf (float __x, int __n) throw (); extern float __scalbnf (float __x, int __n) throw ();
extern int ilogbf (float __x) throw (); extern int __ilogbf (float __x) throw ();
extern float scalblnf (float __x, long int __n) throw (); extern float __scalblnf (float __x, long int __n) throw ();
extern float nearbyintf (float __x) throw (); extern float __nearbyintf (float __x) throw ();
extern float roundf (float __x) throw () __attribute__ ((__const__)); extern float __roundf (float __x) throw () __attribute__ ((__const__));
extern float truncf (float __x) throw () __attribute__ ((__const__)); extern float __truncf (float __x) throw () __attribute__ ((__const__));
extern float remquof (float __x, float __y, int *__quo) throw (); extern float __remquof (float __x, float __y, int *__quo) throw ();
extern long int lrintf (float __x) throw (); extern long int __lrintf (float __x) throw ();
__extension__
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();
extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
__extension__
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();
extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();
extern float fmaxf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) throw () __attribute__ ((__const__));
extern float fminf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fminf (float __x, float __y) throw () __attribute__ ((__const__));
extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));
extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));
extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();

extern int __issignalingf (float __value) throw ()
     __attribute__ ((__const__));
extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();

extern long double acosl (long double __x) throw (); extern long double __acosl (long double __x) throw ();
extern long double asinl (long double __x) throw (); extern long double __asinl (long double __x) throw ();
extern long double atanl (long double __x) throw (); extern long double __atanl (long double __x) throw ();
extern long double atan2l (long double __y, long double __x) throw (); extern long double __atan2l (long double __y, long double __x) throw ();
 extern long double cosl (long double __x) throw (); extern long double __cosl (long double __x) throw ();
 extern long double sinl (long double __x) throw (); extern long double __sinl (long double __x) throw ();
extern long double tanl (long double __x) throw (); extern long double __tanl (long double __x) throw ();
extern long double coshl (long double __x) throw (); extern long double __coshl (long double __x) throw ();
extern long double sinhl (long double __x) throw (); extern long double __sinhl (long double __x) throw ();
extern long double tanhl (long double __x) throw (); extern long double __tanhl (long double __x) throw ();

 extern void sincosl (long double __x, long double *__sinx, long double *__cosx) throw (); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) throw ();

extern long double acoshl (long double __x) throw (); extern long double __acoshl (long double __x) throw ();
extern long double asinhl (long double __x) throw (); extern long double __asinhl (long double __x) throw ();
extern long double atanhl (long double __x) throw (); extern long double __atanhl (long double __x) throw ();


 extern long double expl (long double __x) throw (); extern long double __expl (long double __x) throw ();
extern long double frexpl (long double __x, int *__exponent) throw (); extern long double __frexpl (long double __x, int *__exponent) throw ();
extern long double ldexpl (long double __x, int __exponent) throw (); extern long double __ldexpl (long double __x, int __exponent) throw ();
 extern long double logl (long double __x) throw (); extern long double __logl (long double __x) throw ();
extern long double log10l (long double __x) throw (); extern long double __log10l (long double __x) throw ();
extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw () __attribute__ ((__nonnull__ (2)));

extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();
extern long double pow10l (long double __x) throw (); extern long double __pow10l (long double __x) throw ();

extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();
extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();
extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();


extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();
extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();


 extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();
extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();


extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();


extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();


extern long double ceill (long double __x) throw () __attribute__ ((__const__)); extern long double __ceill (long double __x) throw () __attribute__ ((__const__));
extern long double fabsl (long double __x) throw () __attribute__ ((__const__)); extern long double __fabsl (long double __x) throw () __attribute__ ((__const__));
extern long double floorl (long double __x) throw () __attribute__ ((__const__)); extern long double __floorl (long double __x) throw () __attribute__ ((__const__));
extern long double fmodl (long double __x, long double __y) throw (); extern long double __fmodl (long double __x, long double __y) throw ();
extern int __isinfl (long double __value) throw () __attribute__ ((__const__));
extern int __finitel (long double __value) throw () __attribute__ ((__const__));

extern int isinfl (long double __value) throw () __attribute__ ((__const__));
extern int finitel (long double __value) throw () __attribute__ ((__const__));
extern long double dreml (long double __x, long double __y) throw (); extern long double __dreml (long double __x, long double __y) throw ();
extern long double significandl (long double __x) throw (); extern long double __significandl (long double __x) throw ();

extern long double copysignl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) throw () __attribute__ ((__const__));


extern long double nanl (const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) throw () __attribute__ ((__const__));

extern int __isnanl (long double __value) throw () __attribute__ ((__const__));
extern int isnanl (long double __value) throw () __attribute__ ((__const__));
extern long double j0l (long double) throw (); extern long double __j0l (long double) throw ();
extern long double j1l (long double) throw (); extern long double __j1l (long double) throw ();
extern long double jnl (int, long double) throw (); extern long double __jnl (int, long double) throw ();
extern long double y0l (long double) throw (); extern long double __y0l (long double) throw ();
extern long double y1l (long double) throw (); extern long double __y1l (long double) throw ();
extern long double ynl (int, long double) throw (); extern long double __ynl (int, long double) throw ();

extern long double erfl (long double) throw (); extern long double __erfl (long double) throw ();
extern long double erfcl (long double) throw (); extern long double __erfcl (long double) throw ();
extern long double lgammal (long double) throw (); extern long double __lgammal (long double) throw ();


extern long double tgammal (long double) throw (); extern long double __tgammal (long double) throw ();

extern long double gammal (long double) throw (); extern long double __gammal (long double) throw ();
extern long double lgammal_r (long double, int *__signgamp) throw (); extern long double __lgammal_r (long double, int *__signgamp) throw ();

extern long double rintl (long double __x) throw (); extern long double __rintl (long double __x) throw ();
extern long double nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__));
extern long double nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__));
extern long double remainderl (long double __x, long double __y) throw (); extern long double __remainderl (long double __x, long double __y) throw ();
extern long double scalbnl (long double __x, int __n) throw (); extern long double __scalbnl (long double __x, int __n) throw ();
extern int ilogbl (long double __x) throw (); extern int __ilogbl (long double __x) throw ();
extern long double scalblnl (long double __x, long int __n) throw (); extern long double __scalblnl (long double __x, long int __n) throw ();
extern long double nearbyintl (long double __x) throw (); extern long double __nearbyintl (long double __x) throw ();
extern long double roundl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundl (long double __x) throw () __attribute__ ((__const__));
extern long double truncl (long double __x) throw () __attribute__ ((__const__)); extern long double __truncl (long double __x) throw () __attribute__ ((__const__));
extern long double remquol (long double __x, long double __y, int *__quo) throw (); extern long double __remquol (long double __x, long double __y, int *__quo) throw ();
extern long int lrintl (long double __x) throw (); extern long int __lrintl (long double __x) throw ();
__extension__
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();
extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
__extension__
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();
extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();
extern long double fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__));
extern long double fminl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) throw () __attribute__ ((__const__));
extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));
extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));
extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();

extern int __issignalingl (long double __value) throw ()
     __attribute__ ((__const__));
extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
extern int signgam;
enum
  {
    FP_NAN =
      0,
    FP_INFINITE =
      1,
    FP_ZERO =
      2,
    FP_SUBNORMAL =
      3,
    FP_NORMAL =
      4
  };
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;
extern _LIB_VERSION_TYPE _LIB_VERSION;
struct __exception
  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };
extern int matherr (struct __exception *__exc) throw ();
}
namespace std __attribute__ ((__visibility__ ("default")))
{

  inline constexpr double
  abs(double __x)
  { return __builtin_fabs(__x); }
  inline constexpr float
  abs(float __x)
  { return __builtin_fabsf(__x); }
  inline constexpr long double
  abs(long double __x)
  { return __builtin_fabsl(__x); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    abs(_Tp __x)
    { return __builtin_fabs(__x); }
  using ::acos;
  inline constexpr float
  acos(float __x)
  { return __builtin_acosf(__x); }
  inline constexpr long double
  acos(long double __x)
  { return __builtin_acosl(__x); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    acos(_Tp __x)
    { return __builtin_acos(__x); }
  using ::asin;
  inline constexpr float
  asin(float __x)
  { return __builtin_asinf(__x); }
  inline constexpr long double
  asin(long double __x)
  { return __builtin_asinl(__x); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    asin(_Tp __x)
    { return __builtin_asin(__x); }
  using ::atan;
  inline constexpr float
  atan(float __x)
  { return __builtin_atanf(__x); }
  inline constexpr long double
  atan(long double __x)
  { return __builtin_atanl(__x); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    atan(_Tp __x)
    { return __builtin_atan(__x); }
  using ::atan2;
  inline constexpr float
  atan2(float __y, float __x)
  { return __builtin_atan2f(__y, __x); }
  inline constexpr long double
  atan2(long double __y, long double __x)
  { return __builtin_atan2l(__y, __x); }
  template<typename _Tp, typename _Up>
    inline constexpr
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    atan2(_Tp __y, _Up __x)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return atan2(__type(__y), __type(__x));
    }
  using ::ceil;
  inline constexpr float
  ceil(float __x)
  { return __builtin_ceilf(__x); }
  inline constexpr long double
  ceil(long double __x)
  { return __builtin_ceill(__x); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    ceil(_Tp __x)
    { return __builtin_ceil(__x); }
  using ::cos;
  inline constexpr float
  cos(float __x)
  { return __builtin_cosf(__x); }
  inline constexpr long double
  cos(long double __x)
  { return __builtin_cosl(__x); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    cos(_Tp __x)
    { return __builtin_cos(__x); }
  using ::cosh;
  inline constexpr float
  cosh(float __x)
  { return __builtin_coshf(__x); }
  inline constexpr long double
  cosh(long double __x)
  { return __builtin_coshl(__x); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    cosh(_Tp __x)
    { return __builtin_cosh(__x); }
  using ::exp;
  inline constexpr float
  exp(float __x)
  { return __builtin_expf(__x); }
  inline constexpr long double
  exp(long double __x)
  { return __builtin_expl(__x); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    exp(_Tp __x)
    { return __builtin_exp(__x); }
  using ::fabs;
  inline constexpr float
  fabs(float __x)
  { return __builtin_fabsf(__x); }
  inline constexpr long double
  fabs(long double __x)
  { return __builtin_fabsl(__x); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    fabs(_Tp __x)
    { return __builtin_fabs(__x); }
  using ::floor;
  inline constexpr float
  floor(float __x)
  { return __builtin_floorf(__x); }
  inline constexpr long double
  floor(long double __x)
  { return __builtin_floorl(__x); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    floor(_Tp __x)
    { return __builtin_floor(__x); }
  using ::fmod;
  inline constexpr float
  fmod(float __x, float __y)
  { return __builtin_fmodf(__x, __y); }
  inline constexpr long double
  fmod(long double __x, long double __y)
  { return __builtin_fmodl(__x, __y); }
  template<typename _Tp, typename _Up>
    inline constexpr
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fmod(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fmod(__type(__x), __type(__y));
    }
  using ::frexp;
  inline float
  frexp(float __x, int* __exp)
  { return __builtin_frexpf(__x, __exp); }
  inline long double
  frexp(long double __x, int* __exp)
  { return __builtin_frexpl(__x, __exp); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    frexp(_Tp __x, int* __exp)
    { return __builtin_frexp(__x, __exp); }
  using ::ldexp;
  inline constexpr float
  ldexp(float __x, int __exp)
  { return __builtin_ldexpf(__x, __exp); }
  inline constexpr long double
  ldexp(long double __x, int __exp)
  { return __builtin_ldexpl(__x, __exp); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    ldexp(_Tp __x, int __exp)
    { return __builtin_ldexp(__x, __exp); }
  using ::log;
  inline constexpr float
  log(float __x)
  { return __builtin_logf(__x); }
  inline constexpr long double
  log(long double __x)
  { return __builtin_logl(__x); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    log(_Tp __x)
    { return __builtin_log(__x); }
  using ::log10;
  inline constexpr float
  log10(float __x)
  { return __builtin_log10f(__x); }
  inline constexpr long double
  log10(long double __x)
  { return __builtin_log10l(__x); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    log10(_Tp __x)
    { return __builtin_log10(__x); }
  using ::modf;
  inline float
  modf(float __x, float* __iptr)
  { return __builtin_modff(__x, __iptr); }
  inline long double
  modf(long double __x, long double* __iptr)
  { return __builtin_modfl(__x, __iptr); }
  using ::pow;
  inline constexpr float
  pow(float __x, float __y)
  { return __builtin_powf(__x, __y); }
  inline constexpr long double
  pow(long double __x, long double __y)
  { return __builtin_powl(__x, __y); }
  template<typename _Tp, typename _Up>
    inline constexpr
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    pow(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return pow(__type(__x), __type(__y));
    }
  using ::sin;
  inline constexpr float
  sin(float __x)
  { return __builtin_sinf(__x); }
  inline constexpr long double
  sin(long double __x)
  { return __builtin_sinl(__x); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sin(_Tp __x)
    { return __builtin_sin(__x); }
  using ::sinh;
  inline constexpr float
  sinh(float __x)
  { return __builtin_sinhf(__x); }
  inline constexpr long double
  sinh(long double __x)
  { return __builtin_sinhl(__x); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sinh(_Tp __x)
    { return __builtin_sinh(__x); }
  using ::sqrt;
  inline constexpr float
  sqrt(float __x)
  { return __builtin_sqrtf(__x); }
  inline constexpr long double
  sqrt(long double __x)
  { return __builtin_sqrtl(__x); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sqrt(_Tp __x)
    { return __builtin_sqrt(__x); }
  using ::tan;
  inline constexpr float
  tan(float __x)
  { return __builtin_tanf(__x); }
  inline constexpr long double
  tan(long double __x)
  { return __builtin_tanl(__x); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    tan(_Tp __x)
    { return __builtin_tan(__x); }
  using ::tanh;
  inline constexpr float
  tanh(float __x)
  { return __builtin_tanhf(__x); }
  inline constexpr long double
  tanh(long double __x)
  { return __builtin_tanhl(__x); }
  template<typename _Tp>
    inline constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    tanh(_Tp __x)
    { return __builtin_tanh(__x); }

}
namespace std __attribute__ ((__visibility__ ("default")))
{

  constexpr int
  fpclassify(float __x)
  { return __builtin_fpclassify(0, 1, 4,
    3, 2, __x); }
  constexpr int
  fpclassify(double __x)
  { return __builtin_fpclassify(0, 1, 4,
    3, 2, __x); }
  constexpr int
  fpclassify(long double __x)
  { return __builtin_fpclassify(0, 1, 4,
    3, 2, __x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              int>::__type
    fpclassify(_Tp __x)
    { return __x != 0 ? 4 : 2; }
  constexpr bool
  isfinite(float __x)
  { return __builtin_isfinite(__x); }
  constexpr bool
  isfinite(double __x)
  { return __builtin_isfinite(__x); }
  constexpr bool
  isfinite(long double __x)
  { return __builtin_isfinite(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isfinite(_Tp __x)
    { return true; }
  constexpr bool
  isinf(float __x)
  { return __builtin_isinf(__x); }
  constexpr bool
  isinf(double __x)
  { return __builtin_isinf(__x); }
  constexpr bool
  isinf(long double __x)
  { return __builtin_isinf(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isinf(_Tp __x)
    { return false; }
  constexpr bool
  isnan(float __x)
  { return __builtin_isnan(__x); }
  constexpr bool
  isnan(double __x)
  { return __builtin_isnan(__x); }
  constexpr bool
  isnan(long double __x)
  { return __builtin_isnan(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isnan(_Tp __x)
    { return false; }
  constexpr bool
  isnormal(float __x)
  { return __builtin_isnormal(__x); }
  constexpr bool
  isnormal(double __x)
  { return __builtin_isnormal(__x); }
  constexpr bool
  isnormal(long double __x)
  { return __builtin_isnormal(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    isnormal(_Tp __x)
    { return __x != 0 ? true : false; }
  constexpr bool
  signbit(float __x)
  { return __builtin_signbitf(__x); }
  constexpr bool
  signbit(double __x)
  { return __builtin_signbit(__x); }
  constexpr bool
  signbit(long double __x)
  { return __builtin_signbitl(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              bool>::__type
    signbit(_Tp __x)
    { return __x < 0 ? true : false; }
  constexpr bool
  isgreater(float __x, float __y)
  { return __builtin_isgreater(__x, __y); }
  constexpr bool
  isgreater(double __x, double __y)
  { return __builtin_isgreater(__x, __y); }
  constexpr bool
  isgreater(long double __x, long double __y)
  { return __builtin_isgreater(__x, __y); }
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isgreater(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isgreater(__type(__x), __type(__y));
    }
  constexpr bool
  isgreaterequal(float __x, float __y)
  { return __builtin_isgreaterequal(__x, __y); }
  constexpr bool
  isgreaterequal(double __x, double __y)
  { return __builtin_isgreaterequal(__x, __y); }
  constexpr bool
  isgreaterequal(long double __x, long double __y)
  { return __builtin_isgreaterequal(__x, __y); }
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isgreaterequal(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isgreaterequal(__type(__x), __type(__y));
    }
  constexpr bool
  isless(float __x, float __y)
  { return __builtin_isless(__x, __y); }
  constexpr bool
  isless(double __x, double __y)
  { return __builtin_isless(__x, __y); }
  constexpr bool
  isless(long double __x, long double __y)
  { return __builtin_isless(__x, __y); }
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isless(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isless(__type(__x), __type(__y));
    }
  constexpr bool
  islessequal(float __x, float __y)
  { return __builtin_islessequal(__x, __y); }
  constexpr bool
  islessequal(double __x, double __y)
  { return __builtin_islessequal(__x, __y); }
  constexpr bool
  islessequal(long double __x, long double __y)
  { return __builtin_islessequal(__x, __y); }
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    islessequal(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_islessequal(__type(__x), __type(__y));
    }
  constexpr bool
  islessgreater(float __x, float __y)
  { return __builtin_islessgreater(__x, __y); }
  constexpr bool
  islessgreater(double __x, double __y)
  { return __builtin_islessgreater(__x, __y); }
  constexpr bool
  islessgreater(long double __x, long double __y)
  { return __builtin_islessgreater(__x, __y); }
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    islessgreater(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_islessgreater(__type(__x), __type(__y));
    }
  constexpr bool
  isunordered(float __x, float __y)
  { return __builtin_isunordered(__x, __y); }
  constexpr bool
  isunordered(double __x, double __y)
  { return __builtin_isunordered(__x, __y); }
  constexpr bool
  isunordered(long double __x, long double __y)
  { return __builtin_isunordered(__x, __y); }
  template<typename _Tp, typename _Up>
    constexpr typename
    __gnu_cxx::__enable_if<(__is_arithmetic<_Tp>::__value
       && __is_arithmetic<_Up>::__value), bool>::__type
    isunordered(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return __builtin_isunordered(__type(__x), __type(__y));
    }

}
namespace std __attribute__ ((__visibility__ ("default")))
{

  using ::double_t;
  using ::float_t;
  using ::acosh;
  using ::acoshf;
  using ::acoshl;
  using ::asinh;
  using ::asinhf;
  using ::asinhl;
  using ::atanh;
  using ::atanhf;
  using ::atanhl;
  using ::cbrt;
  using ::cbrtf;
  using ::cbrtl;
  using ::copysign;
  using ::copysignf;
  using ::copysignl;
  using ::erf;
  using ::erff;
  using ::erfl;
  using ::erfc;
  using ::erfcf;
  using ::erfcl;
  using ::exp2;
  using ::exp2f;
  using ::exp2l;
  using ::expm1;
  using ::expm1f;
  using ::expm1l;
  using ::fdim;
  using ::fdimf;
  using ::fdiml;
  using ::fma;
  using ::fmaf;
  using ::fmal;
  using ::fmax;
  using ::fmaxf;
  using ::fmaxl;
  using ::fmin;
  using ::fminf;
  using ::fminl;
  using ::hypot;
  using ::hypotf;
  using ::hypotl;
  using ::ilogb;
  using ::ilogbf;
  using ::ilogbl;
  using ::lgamma;
  using ::lgammaf;
  using ::lgammal;
  using ::llrint;
  using ::llrintf;
  using ::llrintl;
  using ::llround;
  using ::llroundf;
  using ::llroundl;
  using ::log1p;
  using ::log1pf;
  using ::log1pl;
  using ::log2;
  using ::log2f;
  using ::log2l;
  using ::logb;
  using ::logbf;
  using ::logbl;
  using ::lrint;
  using ::lrintf;
  using ::lrintl;
  using ::lround;
  using ::lroundf;
  using ::lroundl;
  using ::nan;
  using ::nanf;
  using ::nanl;
  using ::nearbyint;
  using ::nearbyintf;
  using ::nearbyintl;
  using ::nextafter;
  using ::nextafterf;
  using ::nextafterl;
  using ::nexttoward;
  using ::nexttowardf;
  using ::nexttowardl;
  using ::remainder;
  using ::remainderf;
  using ::remainderl;
  using ::remquo;
  using ::remquof;
  using ::remquol;
  using ::rint;
  using ::rintf;
  using ::rintl;
  using ::round;
  using ::roundf;
  using ::roundl;
  using ::scalbln;
  using ::scalblnf;
  using ::scalblnl;
  using ::scalbn;
  using ::scalbnf;
  using ::scalbnl;
  using ::tgamma;
  using ::tgammaf;
  using ::tgammal;
  using ::trunc;
  using ::truncf;
  using ::truncl;
  constexpr float
  acosh(float __x)
  { return __builtin_acoshf(__x); }
  constexpr long double
  acosh(long double __x)
  { return __builtin_acoshl(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    acosh(_Tp __x)
    { return __builtin_acosh(__x); }
  constexpr float
  asinh(float __x)
  { return __builtin_asinhf(__x); }
  constexpr long double
  asinh(long double __x)
  { return __builtin_asinhl(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    asinh(_Tp __x)
    { return __builtin_asinh(__x); }
  constexpr float
  atanh(float __x)
  { return __builtin_atanhf(__x); }
  constexpr long double
  atanh(long double __x)
  { return __builtin_atanhl(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    atanh(_Tp __x)
    { return __builtin_atanh(__x); }
  constexpr float
  cbrt(float __x)
  { return __builtin_cbrtf(__x); }
  constexpr long double
  cbrt(long double __x)
  { return __builtin_cbrtl(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    cbrt(_Tp __x)
    { return __builtin_cbrt(__x); }
  constexpr float
  copysign(float __x, float __y)
  { return __builtin_copysignf(__x, __y); }
  constexpr long double
  copysign(long double __x, long double __y)
  { return __builtin_copysignl(__x, __y); }
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    copysign(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return copysign(__type(__x), __type(__y));
    }
  constexpr float
  erf(float __x)
  { return __builtin_erff(__x); }
  constexpr long double
  erf(long double __x)
  { return __builtin_erfl(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    erf(_Tp __x)
    { return __builtin_erf(__x); }
  constexpr float
  erfc(float __x)
  { return __builtin_erfcf(__x); }
  constexpr long double
  erfc(long double __x)
  { return __builtin_erfcl(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    erfc(_Tp __x)
    { return __builtin_erfc(__x); }
  constexpr float
  exp2(float __x)
  { return __builtin_exp2f(__x); }
  constexpr long double
  exp2(long double __x)
  { return __builtin_exp2l(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    exp2(_Tp __x)
    { return __builtin_exp2(__x); }
  constexpr float
  expm1(float __x)
  { return __builtin_expm1f(__x); }
  constexpr long double
  expm1(long double __x)
  { return __builtin_expm1l(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    expm1(_Tp __x)
    { return __builtin_expm1(__x); }
  constexpr float
  fdim(float __x, float __y)
  { return __builtin_fdimf(__x, __y); }
  constexpr long double
  fdim(long double __x, long double __y)
  { return __builtin_fdiml(__x, __y); }
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fdim(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fdim(__type(__x), __type(__y));
    }
  constexpr float
  fma(float __x, float __y, float __z)
  { return __builtin_fmaf(__x, __y, __z); }
  constexpr long double
  fma(long double __x, long double __y, long double __z)
  { return __builtin_fmal(__x, __y, __z); }
  template<typename _Tp, typename _Up, typename _Vp>
    constexpr typename __gnu_cxx::__promote_3<_Tp, _Up, _Vp>::__type
    fma(_Tp __x, _Up __y, _Vp __z)
    {
      typedef typename __gnu_cxx::__promote_3<_Tp, _Up, _Vp>::__type __type;
      return fma(__type(__x), __type(__y), __type(__z));
    }
  constexpr float
  fmax(float __x, float __y)
  { return __builtin_fmaxf(__x, __y); }
  constexpr long double
  fmax(long double __x, long double __y)
  { return __builtin_fmaxl(__x, __y); }
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fmax(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fmax(__type(__x), __type(__y));
    }
  constexpr float
  fmin(float __x, float __y)
  { return __builtin_fminf(__x, __y); }
  constexpr long double
  fmin(long double __x, long double __y)
  { return __builtin_fminl(__x, __y); }
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fmin(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fmin(__type(__x), __type(__y));
    }
  constexpr float
  hypot(float __x, float __y)
  { return __builtin_hypotf(__x, __y); }
  constexpr long double
  hypot(long double __x, long double __y)
  { return __builtin_hypotl(__x, __y); }
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    hypot(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return hypot(__type(__x), __type(__y));
    }
  constexpr int
  ilogb(float __x)
  { return __builtin_ilogbf(__x); }
  constexpr int
  ilogb(long double __x)
  { return __builtin_ilogbl(__x); }
  template<typename _Tp>
    constexpr
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    int>::__type
    ilogb(_Tp __x)
    { return __builtin_ilogb(__x); }
  constexpr float
  lgamma(float __x)
  { return __builtin_lgammaf(__x); }
  constexpr long double
  lgamma(long double __x)
  { return __builtin_lgammal(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    lgamma(_Tp __x)
    { return __builtin_lgamma(__x); }
  constexpr long long
  llrint(float __x)
  { return __builtin_llrintf(__x); }
  constexpr long long
  llrint(long double __x)
  { return __builtin_llrintl(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long long>::__type
    llrint(_Tp __x)
    { return __builtin_llrint(__x); }
  constexpr long long
  llround(float __x)
  { return __builtin_llroundf(__x); }
  constexpr long long
  llround(long double __x)
  { return __builtin_llroundl(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long long>::__type
    llround(_Tp __x)
    { return __builtin_llround(__x); }
  constexpr float
  log1p(float __x)
  { return __builtin_log1pf(__x); }
  constexpr long double
  log1p(long double __x)
  { return __builtin_log1pl(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    log1p(_Tp __x)
    { return __builtin_log1p(__x); }
  constexpr float
  log2(float __x)
  { return __builtin_log2f(__x); }
  constexpr long double
  log2(long double __x)
  { return __builtin_log2l(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    log2(_Tp __x)
    { return __builtin_log2(__x); }
  constexpr float
  logb(float __x)
  { return __builtin_logbf(__x); }
  constexpr long double
  logb(long double __x)
  { return __builtin_logbl(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    logb(_Tp __x)
    { return __builtin_logb(__x); }
  constexpr long
  lrint(float __x)
  { return __builtin_lrintf(__x); }
  constexpr long
  lrint(long double __x)
  { return __builtin_lrintl(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long>::__type
    lrint(_Tp __x)
    { return __builtin_lrint(__x); }
  constexpr long
  lround(float __x)
  { return __builtin_lroundf(__x); }
  constexpr long
  lround(long double __x)
  { return __builtin_lroundl(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              long>::__type
    lround(_Tp __x)
    { return __builtin_lround(__x); }
  constexpr float
  nearbyint(float __x)
  { return __builtin_nearbyintf(__x); }
  constexpr long double
  nearbyint(long double __x)
  { return __builtin_nearbyintl(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    nearbyint(_Tp __x)
    { return __builtin_nearbyint(__x); }
  constexpr float
  nextafter(float __x, float __y)
  { return __builtin_nextafterf(__x, __y); }
  constexpr long double
  nextafter(long double __x, long double __y)
  { return __builtin_nextafterl(__x, __y); }
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    nextafter(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return nextafter(__type(__x), __type(__y));
    }
  constexpr float
  nexttoward(float __x, long double __y)
  { return __builtin_nexttowardf(__x, __y); }
  constexpr long double
  nexttoward(long double __x, long double __y)
  { return __builtin_nexttowardl(__x, __y); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    nexttoward(_Tp __x, long double __y)
    { return __builtin_nexttoward(__x, __y); }
  constexpr float
  remainder(float __x, float __y)
  { return __builtin_remainderf(__x, __y); }
  constexpr long double
  remainder(long double __x, long double __y)
  { return __builtin_remainderl(__x, __y); }
  template<typename _Tp, typename _Up>
    constexpr typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    remainder(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return remainder(__type(__x), __type(__y));
    }
  inline float
  remquo(float __x, float __y, int* __pquo)
  { return __builtin_remquof(__x, __y, __pquo); }
  inline long double
  remquo(long double __x, long double __y, int* __pquo)
  { return __builtin_remquol(__x, __y, __pquo); }
  template<typename _Tp, typename _Up>
    inline typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    remquo(_Tp __x, _Up __y, int* __pquo)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return remquo(__type(__x), __type(__y), __pquo);
    }
  constexpr float
  rint(float __x)
  { return __builtin_rintf(__x); }
  constexpr long double
  rint(long double __x)
  { return __builtin_rintl(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    rint(_Tp __x)
    { return __builtin_rint(__x); }
  constexpr float
  round(float __x)
  { return __builtin_roundf(__x); }
  constexpr long double
  round(long double __x)
  { return __builtin_roundl(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    round(_Tp __x)
    { return __builtin_round(__x); }
  constexpr float
  scalbln(float __x, long __ex)
  { return __builtin_scalblnf(__x, __ex); }
  constexpr long double
  scalbln(long double __x, long __ex)
  { return __builtin_scalblnl(__x, __ex); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    scalbln(_Tp __x, long __ex)
    { return __builtin_scalbln(__x, __ex); }
  constexpr float
  scalbn(float __x, int __ex)
  { return __builtin_scalbnf(__x, __ex); }
  constexpr long double
  scalbn(long double __x, int __ex)
  { return __builtin_scalbnl(__x, __ex); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    scalbn(_Tp __x, int __ex)
    { return __builtin_scalbn(__x, __ex); }
  constexpr float
  tgamma(float __x)
  { return __builtin_tgammaf(__x); }
  constexpr long double
  tgamma(long double __x)
  { return __builtin_tgammal(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    tgamma(_Tp __x)
    { return __builtin_tgamma(__x); }
  constexpr float
  trunc(float __x)
  { return __builtin_truncf(__x); }
  constexpr long double
  trunc(long double __x)
  { return __builtin_truncl(__x); }
  template<typename _Tp>
    constexpr typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                              double>::__type
    trunc(_Tp __x)
    { return __builtin_trunc(__x); }

}
       
namespace std __attribute__ ((__visibility__ ("default")))
{

  enum float_round_style
  {
    round_indeterminate = -1,
    round_toward_zero = 0,
    round_to_nearest = 1,
    round_toward_infinity = 2,
    round_toward_neg_infinity = 3
  };
  enum float_denorm_style
  {
    denorm_indeterminate = -1,
    denorm_absent = 0,
    denorm_present = 1
  };
  struct __numeric_limits_base
  {
    static constexpr bool is_specialized = false;
    static constexpr int digits = 0;
    static constexpr int digits10 = 0;
    static constexpr int max_digits10 = 0;
    static constexpr bool is_signed = false;
    static constexpr bool is_integer = false;
    static constexpr bool is_exact = false;
    static constexpr int radix = 0;
    static constexpr int min_exponent = 0;
    static constexpr int min_exponent10 = 0;
    static constexpr int max_exponent = 0;
    static constexpr int max_exponent10 = 0;
    static constexpr bool has_infinity = false;
    static constexpr bool has_quiet_NaN = false;
    static constexpr bool has_signaling_NaN = false;
    static constexpr float_denorm_style has_denorm = denorm_absent;
    static constexpr bool has_denorm_loss = false;
    static constexpr bool is_iec559 = false;
    static constexpr bool is_bounded = false;
    static constexpr bool is_modulo = false;
    static constexpr bool traps = false;
    static constexpr bool tinyness_before = false;
    static constexpr float_round_style round_style =
          round_toward_zero;
  };
  template<typename _Tp>
    struct numeric_limits : public __numeric_limits_base
    {
      static constexpr _Tp
      min() noexcept { return _Tp(); }
      static constexpr _Tp
      max() noexcept { return _Tp(); }
      static constexpr _Tp
      lowest() noexcept { return _Tp(); }
      static constexpr _Tp
      epsilon() noexcept { return _Tp(); }
      static constexpr _Tp
      round_error() noexcept { return _Tp(); }
      static constexpr _Tp
      infinity() noexcept { return _Tp(); }
      static constexpr _Tp
      quiet_NaN() noexcept { return _Tp(); }
      static constexpr _Tp
      signaling_NaN() noexcept { return _Tp(); }
      static constexpr _Tp
      denorm_min() noexcept { return _Tp(); }
    };
  template<typename _Tp>
    struct numeric_limits<const _Tp>
    : public numeric_limits<_Tp> { };
  template<typename _Tp>
    struct numeric_limits<volatile _Tp>
    : public numeric_limits<_Tp> { };
  template<typename _Tp>
    struct numeric_limits<const volatile _Tp>
    : public numeric_limits<_Tp> { };
  template<>
    struct numeric_limits<bool>
    {
      static constexpr bool is_specialized = true;
      static constexpr bool
      min() noexcept { return false; }
      static constexpr bool
      max() noexcept { return true; }
      static constexpr bool
      lowest() noexcept { return min(); }
      static constexpr int digits = 1;
      static constexpr int digits10 = 0;
      static constexpr int max_digits10 = 0;
      static constexpr bool is_signed = false;
      static constexpr bool is_integer = true;
      static constexpr bool is_exact = true;
      static constexpr int radix = 2;
      static constexpr bool
      epsilon() noexcept { return false; }
      static constexpr bool
      round_error() noexcept { return false; }
      static constexpr int min_exponent = 0;
      static constexpr int min_exponent10 = 0;
      static constexpr int max_exponent = 0;
      static constexpr int max_exponent10 = 0;
      static constexpr bool has_infinity = false;
      static constexpr bool has_quiet_NaN = false;
      static constexpr bool has_signaling_NaN = false;
      static constexpr float_denorm_style has_denorm
       = denorm_absent;
      static constexpr bool has_denorm_loss = false;
      static constexpr bool
      infinity() noexcept { return false; }
      static constexpr bool
      quiet_NaN() noexcept { return false; }
      static constexpr bool
      signaling_NaN() noexcept { return false; }
      static constexpr bool
      denorm_min() noexcept { return false; }
      static constexpr bool is_iec559 = false;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = false;
      static constexpr bool traps = true;
      static constexpr bool tinyness_before = false;
      static constexpr float_round_style round_style
       = round_toward_zero;
    };
  template<>
    struct numeric_limits<char>
    {
      static constexpr bool is_specialized = true;
      static constexpr char
      min() noexcept { return (((char)(-1) < 0) ? -(((char)(-1) < 0) ? (((((char)1 << ((sizeof(char) * 8 - ((char)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(char)0) - 1 : (char)0); }
      static constexpr char
      max() noexcept { return (((char)(-1) < 0) ? (((((char)1 << ((sizeof(char) * 8 - ((char)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(char)0); }
      static constexpr char
      lowest() noexcept { return min(); }
      static constexpr int digits = (sizeof(char) * 8 - ((char)(-1) < 0));
      static constexpr int digits10 = ((sizeof(char) * 8 - ((char)(-1) < 0)) * 643L / 2136);
      static constexpr int max_digits10 = 0;
      static constexpr bool is_signed = ((char)(-1) < 0);
      static constexpr bool is_integer = true;
      static constexpr bool is_exact = true;
      static constexpr int radix = 2;
      static constexpr char
      epsilon() noexcept { return 0; }
      static constexpr char
      round_error() noexcept { return 0; }
      static constexpr int min_exponent = 0;
      static constexpr int min_exponent10 = 0;
      static constexpr int max_exponent = 0;
      static constexpr int max_exponent10 = 0;
      static constexpr bool has_infinity = false;
      static constexpr bool has_quiet_NaN = false;
      static constexpr bool has_signaling_NaN = false;
      static constexpr float_denorm_style has_denorm
       = denorm_absent;
      static constexpr bool has_denorm_loss = false;
      static constexpr
      char infinity() noexcept { return char(); }
      static constexpr char
      quiet_NaN() noexcept { return char(); }
      static constexpr char
      signaling_NaN() noexcept { return char(); }
      static constexpr char
      denorm_min() noexcept { return static_cast<char>(0); }
      static constexpr bool is_iec559 = false;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = !is_signed;
      static constexpr bool traps = true;
      static constexpr bool tinyness_before = false;
      static constexpr float_round_style round_style
       = round_toward_zero;
    };
  template<>
    struct numeric_limits<signed char>
    {
      static constexpr bool is_specialized = true;
      static constexpr signed char
      min() noexcept { return -0x7f - 1; }
      static constexpr signed char
      max() noexcept { return 0x7f; }
      static constexpr signed char
      lowest() noexcept { return min(); }
      static constexpr int digits = (sizeof(signed char) * 8 - ((signed char)(-1) < 0));
      static constexpr int digits10
       = ((sizeof(signed char) * 8 - ((signed char)(-1) < 0)) * 643L / 2136);
      static constexpr int max_digits10 = 0;
      static constexpr bool is_signed = true;
      static constexpr bool is_integer = true;
      static constexpr bool is_exact = true;
      static constexpr int radix = 2;
      static constexpr signed char
      epsilon() noexcept { return 0; }
      static constexpr signed char
      round_error() noexcept { return 0; }
      static constexpr int min_exponent = 0;
      static constexpr int min_exponent10 = 0;
      static constexpr int max_exponent = 0;
      static constexpr int max_exponent10 = 0;
      static constexpr bool has_infinity = false;
      static constexpr bool has_quiet_NaN = false;
      static constexpr bool has_signaling_NaN = false;
      static constexpr float_denorm_style has_denorm
       = denorm_absent;
      static constexpr bool has_denorm_loss = false;
      static constexpr signed char
      infinity() noexcept { return static_cast<signed char>(0); }
      static constexpr signed char
      quiet_NaN() noexcept { return static_cast<signed char>(0); }
      static constexpr signed char
      signaling_NaN() noexcept
      { return static_cast<signed char>(0); }
      static constexpr signed char
      denorm_min() noexcept
      { return static_cast<signed char>(0); }
      static constexpr bool is_iec559 = false;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = false;
      static constexpr bool traps = true;
      static constexpr bool tinyness_before = false;
      static constexpr float_round_style round_style
       = round_toward_zero;
    };
  template<>
    struct numeric_limits<unsigned char>
    {
      static constexpr bool is_specialized = true;
      static constexpr unsigned char
      min() noexcept { return 0; }
      static constexpr unsigned char
      max() noexcept { return 0x7f * 2U + 1; }
      static constexpr unsigned char
      lowest() noexcept { return min(); }
      static constexpr int digits
       = (sizeof(unsigned char) * 8 - ((unsigned char)(-1) < 0));
      static constexpr int digits10
       = ((sizeof(unsigned char) * 8 - ((unsigned char)(-1) < 0)) * 643L / 2136);
      static constexpr int max_digits10 = 0;
      static constexpr bool is_signed = false;
      static constexpr bool is_integer = true;
      static constexpr bool is_exact = true;
      static constexpr int radix = 2;
      static constexpr unsigned char
      epsilon() noexcept { return 0; }
      static constexpr unsigned char
      round_error() noexcept { return 0; }
      static constexpr int min_exponent = 0;
      static constexpr int min_exponent10 = 0;
      static constexpr int max_exponent = 0;
      static constexpr int max_exponent10 = 0;
      static constexpr bool has_infinity = false;
      static constexpr bool has_quiet_NaN = false;
      static constexpr bool has_signaling_NaN = false;
      static constexpr float_denorm_style has_denorm
       = denorm_absent;
      static constexpr bool has_denorm_loss = false;
      static constexpr unsigned char
      infinity() noexcept
      { return static_cast<unsigned char>(0); }
      static constexpr unsigned char
      quiet_NaN() noexcept
      { return static_cast<unsigned char>(0); }
      static constexpr unsigned char
      signaling_NaN() noexcept
      { return static_cast<unsigned char>(0); }
      static constexpr unsigned char
      denorm_min() noexcept
      { return static_cast<unsigned char>(0); }
      static constexpr bool is_iec559 = false;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = true;
      static constexpr bool traps = true;
      static constexpr bool tinyness_before = false;
      static constexpr float_round_style round_style
       = round_toward_zero;
    };
  template<>
    struct numeric_limits<wchar_t>
    {
      static constexpr bool is_specialized = true;
      static constexpr wchar_t
      min() noexcept { return (((wchar_t)(-1) < 0) ? -(((wchar_t)(-1) < 0) ? (((((wchar_t)1 << ((sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(wchar_t)0) - 1 : (wchar_t)0); }
      static constexpr wchar_t
      max() noexcept { return (((wchar_t)(-1) < 0) ? (((((wchar_t)1 << ((sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(wchar_t)0); }
      static constexpr wchar_t
      lowest() noexcept { return min(); }
      static constexpr int digits = (sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0));
      static constexpr int digits10
       = ((sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0)) * 643L / 2136);
      static constexpr int max_digits10 = 0;
      static constexpr bool is_signed = ((wchar_t)(-1) < 0);
      static constexpr bool is_integer = true;
      static constexpr bool is_exact = true;
      static constexpr int radix = 2;
      static constexpr wchar_t
      epsilon() noexcept { return 0; }
      static constexpr wchar_t
      round_error() noexcept { return 0; }
      static constexpr int min_exponent = 0;
      static constexpr int min_exponent10 = 0;
      static constexpr int max_exponent = 0;
      static constexpr int max_exponent10 = 0;
      static constexpr bool has_infinity = false;
      static constexpr bool has_quiet_NaN = false;
      static constexpr bool has_signaling_NaN = false;
      static constexpr float_denorm_style has_denorm
       = denorm_absent;
      static constexpr bool has_denorm_loss = false;
      static constexpr wchar_t
      infinity() noexcept { return wchar_t(); }
      static constexpr wchar_t
      quiet_NaN() noexcept { return wchar_t(); }
      static constexpr wchar_t
      signaling_NaN() noexcept { return wchar_t(); }
      static constexpr wchar_t
      denorm_min() noexcept { return wchar_t(); }
      static constexpr bool is_iec559 = false;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = !is_signed;
      static constexpr bool traps = true;
      static constexpr bool tinyness_before = false;
      static constexpr float_round_style round_style
       = round_toward_zero;
    };
  template<>
    struct numeric_limits<char16_t>
    {
      static constexpr bool is_specialized = true;
      static constexpr char16_t
      min() noexcept { return (((char16_t)(-1) < 0) ? -(((char16_t)(-1) < 0) ? (((((char16_t)1 << ((sizeof(char16_t) * 8 - ((char16_t)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(char16_t)0) - 1 : (char16_t)0); }
      static constexpr char16_t
      max() noexcept { return (((char16_t)(-1) < 0) ? (((((char16_t)1 << ((sizeof(char16_t) * 8 - ((char16_t)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(char16_t)0); }
      static constexpr char16_t
      lowest() noexcept { return min(); }
      static constexpr int digits = (sizeof(char16_t) * 8 - ((char16_t)(-1) < 0));
      static constexpr int digits10 = ((sizeof(char16_t) * 8 - ((char16_t)(-1) < 0)) * 643L / 2136);
      static constexpr int max_digits10 = 0;
      static constexpr bool is_signed = ((char16_t)(-1) < 0);
      static constexpr bool is_integer = true;
      static constexpr bool is_exact = true;
      static constexpr int radix = 2;
      static constexpr char16_t
      epsilon() noexcept { return 0; }
      static constexpr char16_t
      round_error() noexcept { return 0; }
      static constexpr int min_exponent = 0;
      static constexpr int min_exponent10 = 0;
      static constexpr int max_exponent = 0;
      static constexpr int max_exponent10 = 0;
      static constexpr bool has_infinity = false;
      static constexpr bool has_quiet_NaN = false;
      static constexpr bool has_signaling_NaN = false;
      static constexpr float_denorm_style has_denorm = denorm_absent;
      static constexpr bool has_denorm_loss = false;
      static constexpr char16_t
      infinity() noexcept { return char16_t(); }
      static constexpr char16_t
      quiet_NaN() noexcept { return char16_t(); }
      static constexpr char16_t
      signaling_NaN() noexcept { return char16_t(); }
      static constexpr char16_t
      denorm_min() noexcept { return char16_t(); }
      static constexpr bool is_iec559 = false;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = !is_signed;
      static constexpr bool traps = true;
      static constexpr bool tinyness_before = false;
      static constexpr float_round_style round_style = round_toward_zero;
    };
  template<>
    struct numeric_limits<char32_t>
    {
      static constexpr bool is_specialized = true;
      static constexpr char32_t
      min() noexcept { return (((char32_t)(-1) < 0) ? -(((char32_t)(-1) < 0) ? (((((char32_t)1 << ((sizeof(char32_t) * 8 - ((char32_t)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(char32_t)0) - 1 : (char32_t)0); }
      static constexpr char32_t
      max() noexcept { return (((char32_t)(-1) < 0) ? (((((char32_t)1 << ((sizeof(char32_t) * 8 - ((char32_t)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(char32_t)0); }
      static constexpr char32_t
      lowest() noexcept { return min(); }
      static constexpr int digits = (sizeof(char32_t) * 8 - ((char32_t)(-1) < 0));
      static constexpr int digits10 = ((sizeof(char32_t) * 8 - ((char32_t)(-1) < 0)) * 643L / 2136);
      static constexpr int max_digits10 = 0;
      static constexpr bool is_signed = ((char32_t)(-1) < 0);
      static constexpr bool is_integer = true;
      static constexpr bool is_exact = true;
      static constexpr int radix = 2;
      static constexpr char32_t
      epsilon() noexcept { return 0; }
      static constexpr char32_t
      round_error() noexcept { return 0; }
      static constexpr int min_exponent = 0;
      static constexpr int min_exponent10 = 0;
      static constexpr int max_exponent = 0;
      static constexpr int max_exponent10 = 0;
      static constexpr bool has_infinity = false;
      static constexpr bool has_quiet_NaN = false;
      static constexpr bool has_signaling_NaN = false;
      static constexpr float_denorm_style has_denorm = denorm_absent;
      static constexpr bool has_denorm_loss = false;
      static constexpr char32_t
      infinity() noexcept { return char32_t(); }
      static constexpr char32_t
      quiet_NaN() noexcept { return char32_t(); }
      static constexpr char32_t
      signaling_NaN() noexcept { return char32_t(); }
      static constexpr char32_t
      denorm_min() noexcept { return char32_t(); }
      static constexpr bool is_iec559 = false;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = !is_signed;
      static constexpr bool traps = true;
      static constexpr bool tinyness_before = false;
      static constexpr float_round_style round_style = round_toward_zero;
    };
  template<>
    struct numeric_limits<short>
    {
      static constexpr bool is_specialized = true;
      static constexpr short
      min() noexcept { return -0x7fff - 1; }
      static constexpr short
      max() noexcept { return 0x7fff; }
      static constexpr short
      lowest() noexcept { return min(); }
      static constexpr int digits = (sizeof(short) * 8 - ((short)(-1) < 0));
      static constexpr int digits10 = ((sizeof(short) * 8 - ((short)(-1) < 0)) * 643L / 2136);
      static constexpr int max_digits10 = 0;
      static constexpr bool is_signed = true;
      static constexpr bool is_integer = true;
      static constexpr bool is_exact = true;
      static constexpr int radix = 2;
      static constexpr short
      epsilon() noexcept { return 0; }
      static constexpr short
      round_error() noexcept { return 0; }
      static constexpr int min_exponent = 0;
      static constexpr int min_exponent10 = 0;
      static constexpr int max_exponent = 0;
      static constexpr int max_exponent10 = 0;
      static constexpr bool has_infinity = false;
      static constexpr bool has_quiet_NaN = false;
      static constexpr bool has_signaling_NaN = false;
      static constexpr float_denorm_style has_denorm
       = denorm_absent;
      static constexpr bool has_denorm_loss = false;
      static constexpr short
      infinity() noexcept { return short(); }
      static constexpr short
      quiet_NaN() noexcept { return short(); }
      static constexpr short
      signaling_NaN() noexcept { return short(); }
      static constexpr short
      denorm_min() noexcept { return short(); }
      static constexpr bool is_iec559 = false;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = false;
      static constexpr bool traps = true;
      static constexpr bool tinyness_before = false;
      static constexpr float_round_style round_style
       = round_toward_zero;
    };
  template<>
    struct numeric_limits<unsigned short>
    {
      static constexpr bool is_specialized = true;
      static constexpr unsigned short
      min() noexcept { return 0; }
      static constexpr unsigned short
      max() noexcept { return 0x7fff * 2U + 1; }
      static constexpr unsigned short
      lowest() noexcept { return min(); }
      static constexpr int digits
       = (sizeof(unsigned short) * 8 - ((unsigned short)(-1) < 0));
      static constexpr int digits10
       = ((sizeof(unsigned short) * 8 - ((unsigned short)(-1) < 0)) * 643L / 2136);
      static constexpr int max_digits10 = 0;
      static constexpr bool is_signed = false;
      static constexpr bool is_integer = true;
      static constexpr bool is_exact = true;
      static constexpr int radix = 2;
      static constexpr unsigned short
      epsilon() noexcept { return 0; }
      static constexpr unsigned short
      round_error() noexcept { return 0; }
      static constexpr int min_exponent = 0;
      static constexpr int min_exponent10 = 0;
      static constexpr int max_exponent = 0;
      static constexpr int max_exponent10 = 0;
      static constexpr bool has_infinity = false;
      static constexpr bool has_quiet_NaN = false;
      static constexpr bool has_signaling_NaN = false;
      static constexpr float_denorm_style has_denorm
       = denorm_absent;
      static constexpr bool has_denorm_loss = false;
      static constexpr unsigned short
      infinity() noexcept
      { return static_cast<unsigned short>(0); }
      static constexpr unsigned short
      quiet_NaN() noexcept
      { return static_cast<unsigned short>(0); }
      static constexpr unsigned short
      signaling_NaN() noexcept
      { return static_cast<unsigned short>(0); }
      static constexpr unsigned short
      denorm_min() noexcept
      { return static_cast<unsigned short>(0); }
      static constexpr bool is_iec559 = false;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = true;
      static constexpr bool traps = true;
      static constexpr bool tinyness_before = false;
      static constexpr float_round_style round_style
       = round_toward_zero;
    };
  template<>
    struct numeric_limits<int>
    {
      static constexpr bool is_specialized = true;
      static constexpr int
      min() noexcept { return -0x7fffffff - 1; }
      static constexpr int
      max() noexcept { return 0x7fffffff; }
      static constexpr int
      lowest() noexcept { return min(); }
      static constexpr int digits = (sizeof(int) * 8 - ((int)(-1) < 0));
      static constexpr int digits10 = ((sizeof(int) * 8 - ((int)(-1) < 0)) * 643L / 2136);
      static constexpr int max_digits10 = 0;
      static constexpr bool is_signed = true;
      static constexpr bool is_integer = true;
      static constexpr bool is_exact = true;
      static constexpr int radix = 2;
      static constexpr int
      epsilon() noexcept { return 0; }
      static constexpr int
      round_error() noexcept { return 0; }
      static constexpr int min_exponent = 0;
      static constexpr int min_exponent10 = 0;
      static constexpr int max_exponent = 0;
      static constexpr int max_exponent10 = 0;
      static constexpr bool has_infinity = false;
      static constexpr bool has_quiet_NaN = false;
      static constexpr bool has_signaling_NaN = false;
      static constexpr float_denorm_style has_denorm
       = denorm_absent;
      static constexpr bool has_denorm_loss = false;
      static constexpr int
      infinity() noexcept { return static_cast<int>(0); }
      static constexpr int
      quiet_NaN() noexcept { return static_cast<int>(0); }
      static constexpr int
      signaling_NaN() noexcept { return static_cast<int>(0); }
      static constexpr int
      denorm_min() noexcept { return static_cast<int>(0); }
      static constexpr bool is_iec559 = false;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = false;
      static constexpr bool traps = true;
      static constexpr bool tinyness_before = false;
      static constexpr float_round_style round_style
       = round_toward_zero;
    };
  template<>
    struct numeric_limits<unsigned int>
    {
      static constexpr bool is_specialized = true;
      static constexpr unsigned int
      min() noexcept { return 0; }
      static constexpr unsigned int
      max() noexcept { return 0x7fffffff * 2U + 1; }
      static constexpr unsigned int
      lowest() noexcept { return min(); }
      static constexpr int digits
       = (sizeof(unsigned int) * 8 - ((unsigned int)(-1) < 0));
      static constexpr int digits10
       = ((sizeof(unsigned int) * 8 - ((unsigned int)(-1) < 0)) * 643L / 2136);
      static constexpr int max_digits10 = 0;
      static constexpr bool is_signed = false;
      static constexpr bool is_integer = true;
      static constexpr bool is_exact = true;
      static constexpr int radix = 2;
      static constexpr unsigned int
      epsilon() noexcept { return 0; }
      static constexpr unsigned int
      round_error() noexcept { return 0; }
      static constexpr int min_exponent = 0;
      static constexpr int min_exponent10 = 0;
      static constexpr int max_exponent = 0;
      static constexpr int max_exponent10 = 0;
      static constexpr bool has_infinity = false;
      static constexpr bool has_quiet_NaN = false;
      static constexpr bool has_signaling_NaN = false;
      static constexpr float_denorm_style has_denorm
       = denorm_absent;
      static constexpr bool has_denorm_loss = false;
      static constexpr unsigned int
      infinity() noexcept { return static_cast<unsigned int>(0); }
      static constexpr unsigned int
      quiet_NaN() noexcept
      { return static_cast<unsigned int>(0); }
      static constexpr unsigned int
      signaling_NaN() noexcept
      { return static_cast<unsigned int>(0); }
      static constexpr unsigned int
      denorm_min() noexcept
      { return static_cast<unsigned int>(0); }
      static constexpr bool is_iec559 = false;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = true;
      static constexpr bool traps = true;
      static constexpr bool tinyness_before = false;
      static constexpr float_round_style round_style
       = round_toward_zero;
    };
  template<>
    struct numeric_limits<long>
    {
      static constexpr bool is_specialized = true;
      static constexpr long
      min() noexcept { return -0x7fffffffffffffffL - 1; }
      static constexpr long
      max() noexcept { return 0x7fffffffffffffffL; }
      static constexpr long
      lowest() noexcept { return min(); }
      static constexpr int digits = (sizeof(long) * 8 - ((long)(-1) < 0));
      static constexpr int digits10 = ((sizeof(long) * 8 - ((long)(-1) < 0)) * 643L / 2136);
      static constexpr int max_digits10 = 0;
      static constexpr bool is_signed = true;
      static constexpr bool is_integer = true;
      static constexpr bool is_exact = true;
      static constexpr int radix = 2;
      static constexpr long
      epsilon() noexcept { return 0; }
      static constexpr long
      round_error() noexcept { return 0; }
      static constexpr int min_exponent = 0;
      static constexpr int min_exponent10 = 0;
      static constexpr int max_exponent = 0;
      static constexpr int max_exponent10 = 0;
      static constexpr bool has_infinity = false;
      static constexpr bool has_quiet_NaN = false;
      static constexpr bool has_signaling_NaN = false;
      static constexpr float_denorm_style has_denorm
       = denorm_absent;
      static constexpr bool has_denorm_loss = false;
      static constexpr long
      infinity() noexcept { return static_cast<long>(0); }
      static constexpr long
      quiet_NaN() noexcept { return static_cast<long>(0); }
      static constexpr long
      signaling_NaN() noexcept { return static_cast<long>(0); }
      static constexpr long
      denorm_min() noexcept { return static_cast<long>(0); }
      static constexpr bool is_iec559 = false;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = false;
      static constexpr bool traps = true;
      static constexpr bool tinyness_before = false;
      static constexpr float_round_style round_style
       = round_toward_zero;
    };
  template<>
    struct numeric_limits<unsigned long>
    {
      static constexpr bool is_specialized = true;
      static constexpr unsigned long
      min() noexcept { return 0; }
      static constexpr unsigned long
      max() noexcept { return 0x7fffffffffffffffL * 2UL + 1; }
      static constexpr unsigned long
      lowest() noexcept { return min(); }
      static constexpr int digits
       = (sizeof(unsigned long) * 8 - ((unsigned long)(-1) < 0));
      static constexpr int digits10
       = ((sizeof(unsigned long) * 8 - ((unsigned long)(-1) < 0)) * 643L / 2136);
      static constexpr int max_digits10 = 0;
      static constexpr bool is_signed = false;
      static constexpr bool is_integer = true;
      static constexpr bool is_exact = true;
      static constexpr int radix = 2;
      static constexpr unsigned long
      epsilon() noexcept { return 0; }
      static constexpr unsigned long
      round_error() noexcept { return 0; }
      static constexpr int min_exponent = 0;
      static constexpr int min_exponent10 = 0;
      static constexpr int max_exponent = 0;
      static constexpr int max_exponent10 = 0;
      static constexpr bool has_infinity = false;
      static constexpr bool has_quiet_NaN = false;
      static constexpr bool has_signaling_NaN = false;
      static constexpr float_denorm_style has_denorm
       = denorm_absent;
      static constexpr bool has_denorm_loss = false;
      static constexpr unsigned long
      infinity() noexcept
      { return static_cast<unsigned long>(0); }
      static constexpr unsigned long
      quiet_NaN() noexcept
      { return static_cast<unsigned long>(0); }
      static constexpr unsigned long
      signaling_NaN() noexcept
      { return static_cast<unsigned long>(0); }
      static constexpr unsigned long
      denorm_min() noexcept
      { return static_cast<unsigned long>(0); }
      static constexpr bool is_iec559 = false;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = true;
      static constexpr bool traps = true;
      static constexpr bool tinyness_before = false;
      static constexpr float_round_style round_style
       = round_toward_zero;
    };
  template<>
    struct numeric_limits<long long>
    {
      static constexpr bool is_specialized = true;
      static constexpr long long
      min() noexcept { return -0x7fffffffffffffffLL - 1; }
      static constexpr long long
      max() noexcept { return 0x7fffffffffffffffLL; }
      static constexpr long long
      lowest() noexcept { return min(); }
      static constexpr int digits
       = (sizeof(long long) * 8 - ((long long)(-1) < 0));
      static constexpr int digits10
       = ((sizeof(long long) * 8 - ((long long)(-1) < 0)) * 643L / 2136);
      static constexpr int max_digits10 = 0;
      static constexpr bool is_signed = true;
      static constexpr bool is_integer = true;
      static constexpr bool is_exact = true;
      static constexpr int radix = 2;
      static constexpr long long
      epsilon() noexcept { return 0; }
      static constexpr long long
      round_error() noexcept { return 0; }
      static constexpr int min_exponent = 0;
      static constexpr int min_exponent10 = 0;
      static constexpr int max_exponent = 0;
      static constexpr int max_exponent10 = 0;
      static constexpr bool has_infinity = false;
      static constexpr bool has_quiet_NaN = false;
      static constexpr bool has_signaling_NaN = false;
      static constexpr float_denorm_style has_denorm
       = denorm_absent;
      static constexpr bool has_denorm_loss = false;
      static constexpr long long
      infinity() noexcept { return static_cast<long long>(0); }
      static constexpr long long
      quiet_NaN() noexcept { return static_cast<long long>(0); }
      static constexpr long long
      signaling_NaN() noexcept
      { return static_cast<long long>(0); }
      static constexpr long long
      denorm_min() noexcept { return static_cast<long long>(0); }
      static constexpr bool is_iec559 = false;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = false;
      static constexpr bool traps = true;
      static constexpr bool tinyness_before = false;
      static constexpr float_round_style round_style
       = round_toward_zero;
    };
  template<>
    struct numeric_limits<unsigned long long>
    {
      static constexpr bool is_specialized = true;
      static constexpr unsigned long long
      min() noexcept { return 0; }
      static constexpr unsigned long long
      max() noexcept { return 0x7fffffffffffffffLL * 2ULL + 1; }
      static constexpr unsigned long long
      lowest() noexcept { return min(); }
      static constexpr int digits
       = (sizeof(unsigned long long) * 8 - ((unsigned long long)(-1) < 0));
      static constexpr int digits10
       = ((sizeof(unsigned long long) * 8 - ((unsigned long long)(-1) < 0)) * 643L / 2136);
      static constexpr int max_digits10 = 0;
      static constexpr bool is_signed = false;
      static constexpr bool is_integer = true;
      static constexpr bool is_exact = true;
      static constexpr int radix = 2;
      static constexpr unsigned long long
      epsilon() noexcept { return 0; }
      static constexpr unsigned long long
      round_error() noexcept { return 0; }
      static constexpr int min_exponent = 0;
      static constexpr int min_exponent10 = 0;
      static constexpr int max_exponent = 0;
      static constexpr int max_exponent10 = 0;
      static constexpr bool has_infinity = false;
      static constexpr bool has_quiet_NaN = false;
      static constexpr bool has_signaling_NaN = false;
      static constexpr float_denorm_style has_denorm
       = denorm_absent;
      static constexpr bool has_denorm_loss = false;
      static constexpr unsigned long long
      infinity() noexcept
      { return static_cast<unsigned long long>(0); }
      static constexpr unsigned long long
      quiet_NaN() noexcept
      { return static_cast<unsigned long long>(0); }
      static constexpr unsigned long long
      signaling_NaN() noexcept
      { return static_cast<unsigned long long>(0); }
      static constexpr unsigned long long
      denorm_min() noexcept
      { return static_cast<unsigned long long>(0); }
      static constexpr bool is_iec559 = false;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = true;
      static constexpr bool traps = true;
      static constexpr bool tinyness_before = false;
      static constexpr float_round_style round_style
       = round_toward_zero;
    };
  template<>
    struct numeric_limits<float>
    {
      static constexpr bool is_specialized = true;
      static constexpr float
      min() noexcept { return 1.17549435082228750797e-38F; }
      static constexpr float
      max() noexcept { return 3.40282346638528859812e+38F; }
      static constexpr float
      lowest() noexcept { return -3.40282346638528859812e+38F; }
      static constexpr int digits = 24;
      static constexpr int digits10 = 6;
      static constexpr int max_digits10
  = (2 + (24) * 643L / 2136);
      static constexpr bool is_signed = true;
      static constexpr bool is_integer = false;
      static constexpr bool is_exact = false;
      static constexpr int radix = 2;
      static constexpr float
      epsilon() noexcept { return 1.19209289550781250000e-7F; }
      static constexpr float
      round_error() noexcept { return 0.5F; }
      static constexpr int min_exponent = (-125);
      static constexpr int min_exponent10 = (-37);
      static constexpr int max_exponent = 128;
      static constexpr int max_exponent10 = 38;
      static constexpr bool has_infinity = 1;
      static constexpr bool has_quiet_NaN = 1;
      static constexpr bool has_signaling_NaN = has_quiet_NaN;
      static constexpr float_denorm_style has_denorm
 = bool(1) ? denorm_present : denorm_absent;
      static constexpr bool has_denorm_loss
       = false;
      static constexpr float
      infinity() noexcept { return __builtin_huge_valf(); }
      static constexpr float
      quiet_NaN() noexcept { return __builtin_nanf(""); }
      static constexpr float
      signaling_NaN() noexcept { return __builtin_nansf(""); }
      static constexpr float
      denorm_min() noexcept { return 1.40129846432481707092e-45F; }
      static constexpr bool is_iec559
 = has_infinity && has_quiet_NaN && has_denorm == denorm_present;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = false;
      static constexpr bool traps = false;
      static constexpr bool tinyness_before
       = false;
      static constexpr float_round_style round_style
       = round_to_nearest;
    };
  template<>
    struct numeric_limits<double>
    {
      static constexpr bool is_specialized = true;
      static constexpr double
      min() noexcept { return double(2.22507385850720138309e-308L); }
      static constexpr double
      max() noexcept { return double(1.79769313486231570815e+308L); }
      static constexpr double
      lowest() noexcept { return -double(1.79769313486231570815e+308L); }
      static constexpr int digits = 53;
      static constexpr int digits10 = 15;
      static constexpr int max_digits10
  = (2 + (53) * 643L / 2136);
      static constexpr bool is_signed = true;
      static constexpr bool is_integer = false;
      static constexpr bool is_exact = false;
      static constexpr int radix = 2;
      static constexpr double
      epsilon() noexcept { return double(2.22044604925031308085e-16L); }
      static constexpr double
      round_error() noexcept { return 0.5; }
      static constexpr int min_exponent = (-1021);
      static constexpr int min_exponent10 = (-307);
      static constexpr int max_exponent = 1024;
      static constexpr int max_exponent10 = 308;
      static constexpr bool has_infinity = 1;
      static constexpr bool has_quiet_NaN = 1;
      static constexpr bool has_signaling_NaN = has_quiet_NaN;
      static constexpr float_denorm_style has_denorm
 = bool(1) ? denorm_present : denorm_absent;
      static constexpr bool has_denorm_loss
        = false;
      static constexpr double
      infinity() noexcept { return __builtin_huge_val(); }
      static constexpr double
      quiet_NaN() noexcept { return __builtin_nan(""); }
      static constexpr double
      signaling_NaN() noexcept { return __builtin_nans(""); }
      static constexpr double
      denorm_min() noexcept { return double(4.94065645841246544177e-324L); }
      static constexpr bool is_iec559
 = has_infinity && has_quiet_NaN && has_denorm == denorm_present;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = false;
      static constexpr bool traps = false;
      static constexpr bool tinyness_before
       = false;
      static constexpr float_round_style round_style
       = round_to_nearest;
    };
  template<>
    struct numeric_limits<long double>
    {
      static constexpr bool is_specialized = true;
      static constexpr long double
      min() noexcept { return 3.36210314311209350626e-4932L; }
      static constexpr long double
      max() noexcept { return 1.18973149535723176502e+4932L; }
      static constexpr long double
      lowest() noexcept { return -1.18973149535723176502e+4932L; }
      static constexpr int digits = 64;
      static constexpr int digits10 = 18;
      static constexpr int max_digits10
  = (2 + (64) * 643L / 2136);
      static constexpr bool is_signed = true;
      static constexpr bool is_integer = false;
      static constexpr bool is_exact = false;
      static constexpr int radix = 2;
      static constexpr long double
      epsilon() noexcept { return 1.08420217248550443401e-19L; }
      static constexpr long double
      round_error() noexcept { return 0.5L; }
      static constexpr int min_exponent = (-16381);
      static constexpr int min_exponent10 = (-4931);
      static constexpr int max_exponent = 16384;
      static constexpr int max_exponent10 = 4932;
      static constexpr bool has_infinity = 1;
      static constexpr bool has_quiet_NaN = 1;
      static constexpr bool has_signaling_NaN = has_quiet_NaN;
      static constexpr float_denorm_style has_denorm
 = bool(1) ? denorm_present : denorm_absent;
      static constexpr bool has_denorm_loss
 = false;
      static constexpr long double
      infinity() noexcept { return __builtin_huge_vall(); }
      static constexpr long double
      quiet_NaN() noexcept { return __builtin_nanl(""); }
      static constexpr long double
      signaling_NaN() noexcept { return __builtin_nansl(""); }
      static constexpr long double
      denorm_min() noexcept { return 3.64519953188247460253e-4951L; }
      static constexpr bool is_iec559
 = has_infinity && has_quiet_NaN && has_denorm == denorm_present;
      static constexpr bool is_bounded = true;
      static constexpr bool is_modulo = false;
      static constexpr bool traps = false;
      static constexpr bool tinyness_before =
      false;
      static constexpr float_round_style round_style =
            round_to_nearest;
    };

}
namespace Urho3D
{
static const float M_PI = 3.14159265358979323846264338327950288f;
static const float M_HALF_PI = M_PI * 0.5f;
static const int M_MIN_INT = 0x80000000;
static const int M_MAX_INT = 0x7fffffff;
static const unsigned M_MIN_UNSIGNED = 0x00000000;
static const unsigned M_MAX_UNSIGNED = 0xffffffff;
static const float M_EPSILON = 0.000001f;
static const float M_LARGE_EPSILON = 0.00005f;
static const float M_MIN_NEARCLIP = 0.01f;
static const float M_MAX_FOV = 160.0f;
static const float M_LARGE_VALUE = 100000000.0f;
static const float M_INFINITY = (float)(__builtin_huge_val());
static const float M_DEGTORAD = M_PI / 180.0f;
static const float M_DEGTORAD_2 = M_PI / 360.0f;
static const float M_RADTODEG = 1.0f / M_DEGTORAD;
enum Intersection
{
    OUTSIDE,
    INTERSECTS,
    INSIDE
};
template <class T>
inline bool Equals(T lhs, T rhs) { return lhs + std::numeric_limits<T>::epsilon() >= rhs && lhs - std::numeric_limits<T>::epsilon() <= rhs; }
template <class T, class U>
inline T Lerp(T lhs, T rhs, U t) { return lhs * (1.0 - t) + rhs * t; }
template <class T>
inline T InverseLerp(T lhs, T rhs, T x) { return (x - lhs) / (rhs - lhs); }
template <class T, class U>
inline T Min(T lhs, U rhs) { return lhs < rhs ? lhs : rhs; }
template <class T, class U>
inline T Max(T lhs, U rhs) { return lhs > rhs ? lhs : rhs; }
template <class T>
inline T Abs(T value) { return value >= 0.0 ? value : -value; }
template <class T>
inline T Sign(T value) { return value > 0.0 ? 1.0 : (value < 0.0 ? -1.0 : 0.0); }
inline unsigned FloatToRawIntBits(float value)
{
    unsigned u = *((unsigned*)&value);
    return u;
}
inline bool IsNaN(float value)
{
    unsigned u = FloatToRawIntBits(value);
    return (u & 0x7fffffff) > 0x7f800000;
}
template <class T>
inline T Clamp(T value, T min, T max)
{
    if (value < min)
        return min;
    else if (value > max)
        return max;
    else
        return value;
}
template <class T>
inline T SmoothStep(T lhs, T rhs, T t)
{
    t = Clamp((t - lhs) / (rhs - lhs), T(0.0), T(1.0));
    return t * t * (3.0 - 2.0 * t);
}
template <class T> inline T Sin(T angle) { return sin(angle * M_DEGTORAD); }
template <class T> inline T Cos(T angle) { return cos(angle * M_DEGTORAD); }
template <class T> inline T Tan(T angle) { return tan(angle * M_DEGTORAD); }
template <class T> inline T Asin(T x) { return M_RADTODEG * asin(Clamp(x, T(-1.0), T(1.0))); }
template <class T> inline T Acos(T x) { return M_RADTODEG * acos(Clamp(x, T(-1.0), T(1.0))); }
template <class T> inline T Atan(T x) { return M_RADTODEG * atan(x); }
template <class T> inline T Atan2(T y, T x) { return M_RADTODEG * atan2(y, x); }
template <class T> T Pow(T x, T y) { return pow(x, y); }
template <class T> T Ln(T x) { return log(x); }
template <class T> T Sqrt(T x) { return sqrt(x); }
template <class T> T Mod(T x, T y) { return fmod(x, y); }
template <class T> T Fract(T value) { return value - floor(value); }
template <class T> T Floor(T x) { return floor(x); }
template <class T> int FloorToInt(T x) { return static_cast<int>(floor(x)); }
template <class T> T Round(T x) { return floor(x + T(0.5)); }
template <class T> int RoundToInt(T x) { return static_cast<int>(floor(x + T(0.5))); }
template <class T> T Ceil(T x) { return ceil(x); }
template <class T> int CeilToInt(T x) { return static_cast<int>(ceil(x)); }
inline bool IsPowerOfTwo(unsigned value)
{
    return !(value & (value - 1));
}
inline unsigned NextPowerOfTwo(unsigned value)
{
    --value;
    value |= value >> 1;
    value |= value >> 2;
    value |= value >> 4;
    value |= value >> 8;
    value |= value >> 16;
    return ++value;
}
inline unsigned CountSetBits(unsigned value)
{
    unsigned count = 0;
    for (count = 0; value; count++)
        value &= value - 1;
    return count;
}
inline unsigned SDBMHash(unsigned hash, unsigned char c) { return c + (hash << 6) + (hash << 16) - hash; }
inline float Random() { return Rand() / 32768.0f; }
inline float Random(float range) { return Rand() * range / 32767.0f; }
inline float Random(float min, float max) { return Rand() * (max - min) / 32767.0f + min; }
inline int Random(int range) { return (int)(Random() * range); }
inline int Random(int min, int max) { float range = (float)(max - min); return (int)(Random() * range) + min; }
inline float RandomNormal(float meanValue, float variance) { return RandStandardNormal() * sqrtf(variance) + meanValue; }
inline unsigned short FloatToHalf(float value)
{
    unsigned inu = FloatToRawIntBits(value);
    unsigned t1 = inu & 0x7fffffff;
    unsigned t2 = inu & 0x80000000;
    unsigned t3 = inu & 0x7f800000;
    t1 >>= 13;
    t2 >>= 16;
    t1 -= 0x1c000;
    t1 = (t3 < 0x38800000) ? 0 : t1;
    t1 = (t3 > 0x47000000) ? 0x7bff : t1;
    t1 = (t3 == 0 ? 0 : t1);
    t1 |= t2;
    return (unsigned short)t1;
}
inline float HalfToFloat(unsigned short value)
{
    unsigned t1 = value & 0x7fff;
    unsigned t2 = value & 0x8000;
    unsigned t3 = value & 0x7c00;
    t1 <<= 13;
    t2 <<= 16;
    t1 += 0x38000000;
    t1 = (t3 == 0 ? 0 : t1);
    t1 |= t2;
    float out;
    *((unsigned*)&out) = t1;
    return out;
}
 void SinCos(float angle, float& sin, float& cos);
}
namespace Urho3D
{
class IntVector2
{
public:
    IntVector2() :
        x_(0),
        y_(0)
    {
    }
    IntVector2(int x, int y) :
        x_(x),
        y_(y)
    {
    }
    IntVector2(const int* data) :
        x_(data[0]),
        y_(data[1])
    {
    }
    IntVector2(const IntVector2& rhs) :
        x_(rhs.x_),
        y_(rhs.y_)
    {
    }
    IntVector2& operator =(const IntVector2& rhs)
    {
        x_ = rhs.x_;
        y_ = rhs.y_;
        return *this;
    }
    bool operator ==(const IntVector2& rhs) const { return x_ == rhs.x_ && y_ == rhs.y_; }
    bool operator !=(const IntVector2& rhs) const { return x_ != rhs.x_ || y_ != rhs.y_; }
    IntVector2 operator +(const IntVector2& rhs) const { return IntVector2(x_ + rhs.x_, y_ + rhs.y_); }
    IntVector2 operator -() const { return IntVector2(-x_, -y_); }
    IntVector2 operator -(const IntVector2& rhs) const { return IntVector2(x_ - rhs.x_, y_ - rhs.y_); }
    IntVector2 operator *(int rhs) const { return IntVector2(x_ * rhs, y_ * rhs); }
    IntVector2 operator /(int rhs) const { return IntVector2(x_ / rhs, y_ / rhs); }
    IntVector2& operator +=(const IntVector2& rhs)
    {
        x_ += rhs.x_;
        y_ += rhs.y_;
        return *this;
    }
    IntVector2& operator -=(const IntVector2& rhs)
    {
        x_ -= rhs.x_;
        y_ -= rhs.y_;
        return *this;
    }
    IntVector2& operator *=(int rhs)
    {
        x_ *= rhs;
        y_ *= rhs;
        return *this;
    }
    IntVector2& operator /=(int rhs)
    {
        x_ /= rhs;
        y_ /= rhs;
        return *this;
    }
    const int* Data() const { return &x_; }
    String ToString() const;
    unsigned ToHash() const { return (unsigned)x_ * 31 + (unsigned)y_; }
    float Length() const { return sqrtf((float)(x_ * x_ + y_ * y_)); }
    int x_;
    int y_;
    static const IntVector2 ZERO;
    static const IntVector2 LEFT;
    static const IntVector2 RIGHT;
    static const IntVector2 UP;
    static const IntVector2 DOWN;
    static const IntVector2 ONE;
};
class Vector2
{
public:
    Vector2() :
        x_(0.0f),
        y_(0.0f)
    {
    }
    Vector2(const Vector2& vector) :
        x_(vector.x_),
        y_(vector.y_)
    {
    }
    explicit Vector2(const IntVector2& vector) :
        x_((float)vector.x_),
        y_((float)vector.y_)
    {
    }
    Vector2(float x, float y) :
        x_(x),
        y_(y)
    {
    }
    explicit Vector2(const float* data) :
        x_(data[0]),
        y_(data[1])
    {
    }
    Vector2& operator =(const Vector2& rhs)
    {
        x_ = rhs.x_;
        y_ = rhs.y_;
        return *this;
    }
    bool operator ==(const Vector2& rhs) const { return x_ == rhs.x_ && y_ == rhs.y_; }
    bool operator !=(const Vector2& rhs) const { return x_ != rhs.x_ || y_ != rhs.y_; }
    Vector2 operator +(const Vector2& rhs) const { return Vector2(x_ + rhs.x_, y_ + rhs.y_); }
    Vector2 operator -() const { return Vector2(-x_, -y_); }
    Vector2 operator -(const Vector2& rhs) const { return Vector2(x_ - rhs.x_, y_ - rhs.y_); }
    Vector2 operator *(float rhs) const { return Vector2(x_ * rhs, y_ * rhs); }
    Vector2 operator *(const Vector2& rhs) const { return Vector2(x_ * rhs.x_, y_ * rhs.y_); }
    Vector2 operator /(float rhs) const { return Vector2(x_ / rhs, y_ / rhs); }
    Vector2 operator /(const Vector2& rhs) const { return Vector2(x_ / rhs.x_, y_ / rhs.y_); }
    Vector2& operator +=(const Vector2& rhs)
    {
        x_ += rhs.x_;
        y_ += rhs.y_;
        return *this;
    }
    Vector2& operator -=(const Vector2& rhs)
    {
        x_ -= rhs.x_;
        y_ -= rhs.y_;
        return *this;
    }
    Vector2& operator *=(float rhs)
    {
        x_ *= rhs;
        y_ *= rhs;
        return *this;
    }
    Vector2& operator *=(const Vector2& rhs)
    {
        x_ *= rhs.x_;
        y_ *= rhs.y_;
        return *this;
    }
    Vector2& operator /=(float rhs)
    {
        float invRhs = 1.0f / rhs;
        x_ *= invRhs;
        y_ *= invRhs;
        return *this;
    }
    Vector2& operator /=(const Vector2& rhs)
    {
        x_ /= rhs.x_;
        y_ /= rhs.y_;
        return *this;
    }
    void Normalize()
    {
        float lenSquared = LengthSquared();
        if (!Urho3D::Equals(lenSquared, 1.0f) && lenSquared > 0.0f)
        {
            float invLen = 1.0f / sqrtf(lenSquared);
            x_ *= invLen;
            y_ *= invLen;
        }
    }
    float Length() const { return sqrtf(x_ * x_ + y_ * y_); }
    float LengthSquared() const { return x_ * x_ + y_ * y_; }
    float DotProduct(const Vector2& rhs) const { return x_ * rhs.x_ + y_ * rhs.y_; }
    float AbsDotProduct(const Vector2& rhs) const { return Urho3D::Abs(x_ * rhs.x_) + Urho3D::Abs(y_ * rhs.y_); }
    float ProjectOntoAxis(const Vector2& axis) const { return DotProduct(axis.Normalized()); }
    float Angle(const Vector2& rhs) const { return Urho3D::Acos(DotProduct(rhs) / (Length() * rhs.Length())); }
    Vector2 Abs() const { return Vector2(Urho3D::Abs(x_), Urho3D::Abs(y_)); }
    Vector2 Lerp(const Vector2& rhs, float t) const { return *this * (1.0f - t) + rhs * t; }
    bool Equals(const Vector2& rhs) const { return Urho3D::Equals(x_, rhs.x_) && Urho3D::Equals(y_, rhs.y_); }
    bool IsNaN() const { return Urho3D::IsNaN(x_) || Urho3D::IsNaN(y_); }
    Vector2 Normalized() const
    {
        float lenSquared = LengthSquared();
        if (!Urho3D::Equals(lenSquared, 1.0f) && lenSquared > 0.0f)
        {
            float invLen = 1.0f / sqrtf(lenSquared);
            return *this * invLen;
        }
        else
            return *this;
    }
    const float* Data() const { return &x_; }
    String ToString() const;
    float x_;
    float y_;
    static const Vector2 ZERO;
    static const Vector2 LEFT;
    static const Vector2 RIGHT;
    static const Vector2 UP;
    static const Vector2 DOWN;
    static const Vector2 ONE;
};
inline Vector2 operator *(float lhs, const Vector2& rhs) { return rhs * lhs; }
inline IntVector2 operator *(int lhs, const IntVector2& rhs) { return rhs * lhs; }
inline Vector2 VectorLerp(const Vector2& lhs, const Vector2& rhs, const Vector2& t) { return lhs + (rhs - lhs) * t; }
inline Vector2 VectorMin(const Vector2& lhs, const Vector2& rhs) { return Vector2(Min(lhs.x_, rhs.x_), Min(lhs.y_, rhs.y_)); }
inline Vector2 VectorMax(const Vector2& lhs, const Vector2& rhs) { return Vector2(Max(lhs.x_, rhs.x_), Max(lhs.y_, rhs.y_)); }
inline Vector2 VectorFloor(const Vector2& vec) { return Vector2(Floor(vec.x_), Floor(vec.y_)); }
inline Vector2 VectorRound(const Vector2& vec) { return Vector2(Round(vec.x_), Round(vec.y_)); }
inline Vector2 VectorCeil(const Vector2& vec) { return Vector2(Ceil(vec.x_), Ceil(vec.y_)); }
inline IntVector2 VectorFloorToInt(const Vector2& vec) { return IntVector2(FloorToInt(vec.x_), FloorToInt(vec.y_)); }
inline IntVector2 VectorRoundToInt(const Vector2& vec) { return IntVector2(RoundToInt(vec.x_), RoundToInt(vec.y_)); }
inline IntVector2 VectorCeilToInt(const Vector2& vec) { return IntVector2(CeilToInt(vec.x_), CeilToInt(vec.y_)); }
inline IntVector2 VectorMin(const IntVector2& lhs, const IntVector2& rhs) { return IntVector2(Min(lhs.x_, rhs.x_), Min(lhs.y_, rhs.y_)); }
inline IntVector2 VectorMax(const IntVector2& lhs, const IntVector2& rhs) { return IntVector2(Max(lhs.x_, rhs.x_), Max(lhs.y_, rhs.y_)); }
inline float StableRandom(const Vector2& seed) { return Fract(Sin(seed.DotProduct(Vector2(12.9898f, 78.233f)) * M_RADTODEG) * 43758.5453f); }
inline float StableRandom(float seed) { return StableRandom(Vector2(seed, seed)); }
}
namespace Urho3D
{
class IntVector3
{
public:
    IntVector3() :
        x_(0),
        y_(0),
        z_(0)
    {
    }
    IntVector3(int x, int y, int z) :
        x_(x),
        y_(y),
        z_(z)
    {
    }
    IntVector3(const int* data) :
        x_(data[0]),
        y_(data[1]),
        z_(data[2])
    {
    }
    IntVector3(const IntVector3& rhs) :
        x_(rhs.x_),
        y_(rhs.y_),
        z_(rhs.z_)
    {
    }
    IntVector3& operator =(const IntVector3& rhs)
    {
        x_ = rhs.x_;
        y_ = rhs.y_;
        z_ = rhs.z_;
        return *this;
    }
    bool operator ==(const IntVector3& rhs) const { return x_ == rhs.x_ && y_ == rhs.y_ && z_ == rhs.z_; }
    bool operator !=(const IntVector3& rhs) const { return x_ != rhs.x_ || y_ != rhs.y_ || z_ != rhs.z_; }
    IntVector3 operator +(const IntVector3& rhs) const { return IntVector3(x_ + rhs.x_, y_ + rhs.y_, z_ + rhs.z_); }
    IntVector3 operator -() const { return IntVector3(-x_, -y_, -z_); }
    IntVector3 operator -(const IntVector3& rhs) const { return IntVector3(x_ - rhs.x_, y_ - rhs.y_, z_ - rhs.z_); }
    IntVector3 operator *(int rhs) const { return IntVector3(x_ * rhs, y_ * rhs, z_ * rhs); }
    IntVector3 operator /(int rhs) const { return IntVector3(x_ / rhs, y_ / rhs, z_ / rhs); }
    IntVector3& operator +=(const IntVector3& rhs)
    {
        x_ += rhs.x_;
        y_ += rhs.y_;
        z_ += rhs.z_;
        return *this;
    }
    IntVector3& operator -=(const IntVector3& rhs)
    {
        x_ -= rhs.x_;
        y_ -= rhs.y_;
        z_ -= rhs.z_;
        return *this;
    }
    IntVector3& operator *=(int rhs)
    {
        x_ *= rhs;
        y_ *= rhs;
        z_ *= rhs;
        return *this;
    }
    IntVector3& operator /=(int rhs)
    {
        x_ /= rhs;
        y_ /= rhs;
        z_ /= rhs;
        return *this;
    }
    const int* Data() const { return &x_; }
    String ToString() const;
    unsigned ToHash() const { return (unsigned)x_ * 31 * 31 + (unsigned)y_ * 31 + (unsigned)z_; }
    float Length() const { return sqrtf((float)(x_ * x_ + y_ * y_ + z_ * z_)); }
    int x_;
    int y_;
    int z_;
    static const IntVector3 ZERO;
    static const IntVector3 LEFT;
    static const IntVector3 RIGHT;
    static const IntVector3 UP;
    static const IntVector3 DOWN;
    static const IntVector3 FORWARD;
    static const IntVector3 BACK;
    static const IntVector3 ONE;
};
class Vector3
{
public:
    Vector3() :
        x_(0.0f),
        y_(0.0f),
        z_(0.0f)
    {
    }
    Vector3(const Vector3& vector) :
        x_(vector.x_),
        y_(vector.y_),
        z_(vector.z_)
    {
    }
    Vector3(const Vector2& vector, float z) :
        x_(vector.x_),
        y_(vector.y_),
        z_(z)
    {
    }
    Vector3(const Vector2& vector) :
        x_(vector.x_),
        y_(vector.y_),
        z_(0.0f)
    {
    }
    explicit Vector3(const IntVector3& vector) :
        x_((float)vector.x_),
        y_((float)vector.y_),
        z_((float)vector.z_)
    {
    }
    Vector3(float x, float y, float z) :
        x_(x),
        y_(y),
        z_(z)
    {
    }
    Vector3(float x, float y) :
        x_(x),
        y_(y),
        z_(0.0f)
    {
    }
    explicit Vector3(const float* data) :
        x_(data[0]),
        y_(data[1]),
        z_(data[2])
    {
    }
    Vector3& operator =(const Vector3& rhs)
    {
        x_ = rhs.x_;
        y_ = rhs.y_;
        z_ = rhs.z_;
        return *this;
    }
    bool operator ==(const Vector3& rhs) const { return x_ == rhs.x_ && y_ == rhs.y_ && z_ == rhs.z_; }
    bool operator !=(const Vector3& rhs) const { return x_ != rhs.x_ || y_ != rhs.y_ || z_ != rhs.z_; }
    Vector3 operator +(const Vector3& rhs) const { return Vector3(x_ + rhs.x_, y_ + rhs.y_, z_ + rhs.z_); }
    Vector3 operator -() const { return Vector3(-x_, -y_, -z_); }
    Vector3 operator -(const Vector3& rhs) const { return Vector3(x_ - rhs.x_, y_ - rhs.y_, z_ - rhs.z_); }
    Vector3 operator *(float rhs) const { return Vector3(x_ * rhs, y_ * rhs, z_ * rhs); }
    Vector3 operator *(const Vector3& rhs) const { return Vector3(x_ * rhs.x_, y_ * rhs.y_, z_ * rhs.z_); }
    Vector3 operator /(float rhs) const { return Vector3(x_ / rhs, y_ / rhs, z_ / rhs); }
    Vector3 operator /(const Vector3& rhs) const { return Vector3(x_ / rhs.x_, y_ / rhs.y_, z_ / rhs.z_); }
    Vector3& operator +=(const Vector3& rhs)
    {
        x_ += rhs.x_;
        y_ += rhs.y_;
        z_ += rhs.z_;
        return *this;
    }
    Vector3& operator -=(const Vector3& rhs)
    {
        x_ -= rhs.x_;
        y_ -= rhs.y_;
        z_ -= rhs.z_;
        return *this;
    }
    Vector3& operator *=(float rhs)
    {
        x_ *= rhs;
        y_ *= rhs;
        z_ *= rhs;
        return *this;
    }
    Vector3& operator *=(const Vector3& rhs)
    {
        x_ *= rhs.x_;
        y_ *= rhs.y_;
        z_ *= rhs.z_;
        return *this;
    }
    Vector3& operator /=(float rhs)
    {
        float invRhs = 1.0f / rhs;
        x_ *= invRhs;
        y_ *= invRhs;
        z_ *= invRhs;
        return *this;
    }
    Vector3& operator /=(const Vector3& rhs)
    {
        x_ /= rhs.x_;
        y_ /= rhs.y_;
        z_ /= rhs.z_;
        return *this;
    }
    void Normalize()
    {
        float lenSquared = LengthSquared();
        if (!Urho3D::Equals(lenSquared, 1.0f) && lenSquared > 0.0f)
        {
            float invLen = 1.0f / sqrtf(lenSquared);
            x_ *= invLen;
            y_ *= invLen;
            z_ *= invLen;
        }
    }
    float Length() const { return sqrtf(x_ * x_ + y_ * y_ + z_ * z_); }
    float LengthSquared() const { return x_ * x_ + y_ * y_ + z_ * z_; }
    float DotProduct(const Vector3& rhs) const { return x_ * rhs.x_ + y_ * rhs.y_ + z_ * rhs.z_; }
    float AbsDotProduct(const Vector3& rhs) const
    {
        return Urho3D::Abs(x_ * rhs.x_) + Urho3D::Abs(y_ * rhs.y_) + Urho3D::Abs(z_ * rhs.z_);
    }
    float ProjectOntoAxis(const Vector3& axis) const { return DotProduct(axis.Normalized()); }
    Vector3 Orthogonalize(const Vector3& axis) const { return axis.CrossProduct(*this).CrossProduct(axis).Normalized(); }
    Vector3 CrossProduct(const Vector3& rhs) const
    {
        return Vector3(
            y_ * rhs.z_ - z_ * rhs.y_,
            z_ * rhs.x_ - x_ * rhs.z_,
            x_ * rhs.y_ - y_ * rhs.x_
        );
    }
    Vector3 Abs() const { return Vector3(Urho3D::Abs(x_), Urho3D::Abs(y_), Urho3D::Abs(z_)); }
    Vector3 Lerp(const Vector3& rhs, float t) const { return *this * (1.0f - t) + rhs * t; }
    bool Equals(const Vector3& rhs) const
    {
        return Urho3D::Equals(x_, rhs.x_) && Urho3D::Equals(y_, rhs.y_) && Urho3D::Equals(z_, rhs.z_);
    }
    float Angle(const Vector3& rhs) const { return Urho3D::Acos(DotProduct(rhs) / (Length() * rhs.Length())); }
    bool IsNaN() const { return Urho3D::IsNaN(x_) || Urho3D::IsNaN(y_) || Urho3D::IsNaN(z_); }
    Vector3 Normalized() const
    {
        float lenSquared = LengthSquared();
        if (!Urho3D::Equals(lenSquared, 1.0f) && lenSquared > 0.0f)
        {
            float invLen = 1.0f / sqrtf(lenSquared);
            return *this * invLen;
        }
        else
            return *this;
    }
    const float* Data() const { return &x_; }
    String ToString() const;
    unsigned ToHash() const
    {
        unsigned hash = 37;
        hash = 37 * hash + FloatToRawIntBits(x_);
        hash = 37 * hash + FloatToRawIntBits(y_);
        hash = 37 * hash + FloatToRawIntBits(z_);
        return hash;
    }
    float x_;
    float y_;
    float z_;
    static const Vector3 ZERO;
    static const Vector3 LEFT;
    static const Vector3 RIGHT;
    static const Vector3 UP;
    static const Vector3 DOWN;
    static const Vector3 FORWARD;
    static const Vector3 BACK;
    static const Vector3 ONE;
};
inline Vector3 operator *(float lhs, const Vector3& rhs) { return rhs * lhs; }
inline IntVector3 operator *(int lhs, const IntVector3& rhs) { return rhs * lhs; }
inline Vector3 VectorLerp(const Vector3& lhs, const Vector3& rhs, const Vector3& t) { return lhs + (rhs - lhs) * t; }
inline Vector3 VectorMin(const Vector3& lhs, const Vector3& rhs) { return Vector3(Min(lhs.x_, rhs.x_), Min(lhs.y_, rhs.y_), Min(lhs.z_, rhs.z_)); }
inline Vector3 VectorMax(const Vector3& lhs, const Vector3& rhs) { return Vector3(Max(lhs.x_, rhs.x_), Max(lhs.y_, rhs.y_), Max(lhs.z_, rhs.z_)); }
inline Vector3 VectorFloor(const Vector3& vec) { return Vector3(Floor(vec.x_), Floor(vec.y_), Floor(vec.z_)); }
inline Vector3 VectorRound(const Vector3& vec) { return Vector3(Round(vec.x_), Round(vec.y_), Round(vec.z_)); }
inline Vector3 VectorCeil(const Vector3& vec) { return Vector3(Ceil(vec.x_), Ceil(vec.y_), Ceil(vec.z_)); }
inline IntVector3 VectorFloorToInt(const Vector3& vec) { return IntVector3(FloorToInt(vec.x_), FloorToInt(vec.y_), FloorToInt(vec.z_)); }
inline IntVector3 VectorRoundToInt(const Vector3& vec) { return IntVector3(RoundToInt(vec.x_), RoundToInt(vec.y_), RoundToInt(vec.z_)); }
inline IntVector3 VectorCeilToInt(const Vector3& vec) { return IntVector3(CeilToInt(vec.x_), CeilToInt(vec.y_), CeilToInt(vec.z_)); }
inline IntVector3 VectorMin(const IntVector3& lhs, const IntVector3& rhs) { return IntVector3(Min(lhs.x_, rhs.x_), Min(lhs.y_, rhs.y_), Min(lhs.z_, rhs.z_)); }
inline IntVector3 VectorMax(const IntVector3& lhs, const IntVector3& rhs) { return IntVector3(Max(lhs.x_, rhs.x_), Max(lhs.y_, rhs.y_), Max(lhs.z_, rhs.z_)); }
inline float StableRandom(const Vector3& seed) { return StableRandom(Vector2(StableRandom(Vector2(seed.x_, seed.y_)), seed.z_)); }
}
namespace Urho3D
{
class Vector4
{
public:
    Vector4() :
        x_(0.0f),
        y_(0.0f),
        z_(0.0f),
        w_(0.0f)
    {
    }
    Vector4(const Vector4& vector) :
        x_(vector.x_),
        y_(vector.y_),
        z_(vector.z_),
        w_(vector.w_)
    {
    }
    Vector4(const Vector3& vector, float w) :
        x_(vector.x_),
        y_(vector.y_),
        z_(vector.z_),
        w_(w)
    {
    }
    Vector4(float x, float y, float z, float w) :
        x_(x),
        y_(y),
        z_(z),
        w_(w)
    {
    }
    explicit Vector4(const float* data) :
        x_(data[0]),
        y_(data[1]),
        z_(data[2]),
        w_(data[3])
    {
    }
    Vector4& operator =(const Vector4& rhs)
    {
        x_ = rhs.x_;
        y_ = rhs.y_;
        z_ = rhs.z_;
        w_ = rhs.w_;
        return *this;
    }
    bool operator ==(const Vector4& rhs) const { return x_ == rhs.x_ && y_ == rhs.y_ && z_ == rhs.z_ && w_ == rhs.w_; }
    bool operator !=(const Vector4& rhs) const { return x_ != rhs.x_ || y_ != rhs.y_ || z_ != rhs.z_ || w_ != rhs.w_; }
    Vector4 operator +(const Vector4& rhs) const { return Vector4(x_ + rhs.x_, y_ + rhs.y_, z_ + rhs.z_, w_ + rhs.w_); }
    Vector4 operator -() const { return Vector4(-x_, -y_, -z_, -w_); }
    Vector4 operator -(const Vector4& rhs) const { return Vector4(x_ - rhs.x_, y_ - rhs.y_, z_ - rhs.z_, w_ - rhs.w_); }
    Vector4 operator *(float rhs) const { return Vector4(x_ * rhs, y_ * rhs, z_ * rhs, w_ * rhs); }
    Vector4 operator *(const Vector4& rhs) const { return Vector4(x_ * rhs.x_, y_ * rhs.y_, z_ * rhs.z_, w_ * rhs.w_); }
    Vector4 operator /(float rhs) const { return Vector4(x_ / rhs, y_ / rhs, z_ / rhs, w_ / rhs); }
    Vector4 operator /(const Vector4& rhs) const { return Vector4(x_ / rhs.x_, y_ / rhs.y_, z_ / rhs.z_, w_ / rhs.w_); }
    Vector4& operator +=(const Vector4& rhs)
    {
        x_ += rhs.x_;
        y_ += rhs.y_;
        z_ += rhs.z_;
        w_ += rhs.w_;
        return *this;
    }
    Vector4& operator -=(const Vector4& rhs)
    {
        x_ -= rhs.x_;
        y_ -= rhs.y_;
        z_ -= rhs.z_;
        w_ -= rhs.w_;
        return *this;
    }
    Vector4& operator *=(float rhs)
    {
        x_ *= rhs;
        y_ *= rhs;
        z_ *= rhs;
        w_ *= rhs;
        return *this;
    }
    Vector4& operator *=(const Vector4& rhs)
    {
        x_ *= rhs.x_;
        y_ *= rhs.y_;
        z_ *= rhs.z_;
        w_ *= rhs.w_;
        return *this;
    }
    Vector4& operator /=(float rhs)
    {
        float invRhs = 1.0f / rhs;
        x_ *= invRhs;
        y_ *= invRhs;
        z_ *= invRhs;
        w_ *= invRhs;
        return *this;
    }
    Vector4& operator /=(const Vector4& rhs)
    {
        x_ /= rhs.x_;
        y_ /= rhs.y_;
        z_ /= rhs.z_;
        w_ /= rhs.w_;
        return *this;
    }
    float DotProduct(const Vector4& rhs) const { return x_ * rhs.x_ + y_ * rhs.y_ + z_ * rhs.z_ + w_ * rhs.w_; }
    float AbsDotProduct(const Vector4& rhs) const
    {
        return Urho3D::Abs(x_ * rhs.x_) + Urho3D::Abs(y_ * rhs.y_) + Urho3D::Abs(z_ * rhs.z_) + Urho3D::Abs(w_ * rhs.w_);
    }
    float ProjectOntoAxis(const Vector3& axis) const { return DotProduct(Vector4(axis.Normalized(), 0.0f)); }
    Vector4 Abs() const { return Vector4(Urho3D::Abs(x_), Urho3D::Abs(y_), Urho3D::Abs(z_), Urho3D::Abs(w_)); }
    Vector4 Lerp(const Vector4& rhs, float t) const { return *this * (1.0f - t) + rhs * t; }
    bool Equals(const Vector4& rhs) const
    {
        return Urho3D::Equals(x_, rhs.x_) && Urho3D::Equals(y_, rhs.y_) && Urho3D::Equals(z_, rhs.z_) && Urho3D::Equals(w_, rhs.w_);
    }
    bool IsNaN() const { return Urho3D::IsNaN(x_) || Urho3D::IsNaN(y_) || Urho3D::IsNaN(z_) || Urho3D::IsNaN(w_); }
    const float* Data() const { return &x_; }
    String ToString() const;
    float x_;
    float y_;
    float z_;
    float w_;
    static const Vector4 ZERO;
    static const Vector4 ONE;
};
inline Vector4 operator *(float lhs, const Vector4& rhs) { return rhs * lhs; }
inline Vector4 VectorLerp(const Vector4& lhs, const Vector4& rhs, const Vector4& t) { return lhs + (rhs - lhs) * t; }
inline Vector4 VectorMin(const Vector4& lhs, const Vector4& rhs) { return Vector4(Min(lhs.x_, rhs.x_), Min(lhs.y_, rhs.y_), Min(lhs.z_, rhs.z_), Min(lhs.w_, rhs.w_)); }
inline Vector4 VectorMax(const Vector4& lhs, const Vector4& rhs) { return Vector4(Max(lhs.x_, rhs.x_), Max(lhs.y_, rhs.y_), Max(lhs.z_, rhs.z_), Max(lhs.w_, rhs.w_)); }
inline Vector4 VectorFloor(const Vector4& vec) { return Vector4(Floor(vec.x_), Floor(vec.y_), Floor(vec.z_), Floor(vec.w_)); }
inline Vector4 VectorRound(const Vector4& vec) { return Vector4(Round(vec.x_), Round(vec.y_), Round(vec.z_), Round(vec.w_)); }
inline Vector4 VectorCeil(const Vector4& vec) { return Vector4(Ceil(vec.x_), Ceil(vec.y_), Ceil(vec.z_), Ceil(vec.w_)); }
}
namespace Urho3D
{
class Rect
{
public:
    Rect() :
        min_(M_INFINITY, M_INFINITY),
        max_(-M_INFINITY, -M_INFINITY)
    {
    }
    Rect(const Vector2& min, const Vector2& max) :
        min_(min),
        max_(max)
    {
    }
    Rect(float left, float top, float right, float bottom) :
        min_(left, top),
        max_(right, bottom)
    {
    }
    Rect(const Vector4& vector) :
        min_(vector.x_, vector.y_),
        max_(vector.z_, vector.w_)
    {
    }
    explicit Rect(const float* data) :
        min_(data[0], data[1]),
        max_(data[2], data[3])
    {
    }
    Rect(const Rect& rect) :
        min_(rect.min_),
        max_(rect.max_)
    {
    }
    Rect& operator =(const Rect& rhs)
    {
        min_ = rhs.min_;
        max_ = rhs.max_;
        return *this;
    }
    bool operator ==(const Rect& rhs) const { return min_ == rhs.min_ && max_ == rhs.max_; }
    bool operator !=(const Rect& rhs) const { return min_ != rhs.min_ || max_ != rhs.max_; }
    void Define(const Rect& rect)
    {
        min_ = rect.min_;
        max_ = rect.max_;
    }
    void Define(const Vector2& min, const Vector2& max)
    {
        min_ = min;
        max_ = max;
    }
    void Define(const Vector2& point)
    {
        min_ = max_ = point;
    }
    void Merge(const Vector2& point)
    {
        if (point.x_ < min_.x_)
            min_.x_ = point.x_;
        if (point.x_ > max_.x_)
            max_.x_ = point.x_;
        if (point.y_ < min_.y_)
            min_.y_ = point.y_;
        if (point.y_ > max_.y_)
            max_.y_ = point.y_;
    }
    void Merge(const Rect& rect)
    {
        if (rect.min_.x_ < min_.x_)
            min_.x_ = rect.min_.x_;
        if (rect.min_.y_ < min_.y_)
            min_.y_ = rect.min_.y_;
        if (rect.max_.x_ > max_.x_)
            max_.x_ = rect.max_.x_;
        if (rect.max_.y_ > max_.y_)
            max_.y_ = rect.max_.y_;
    }
    void Clear()
    {
        min_ = Vector2(M_INFINITY, M_INFINITY);
        max_ = Vector2(-M_INFINITY, -M_INFINITY);
    }
    void Clip(const Rect& rect);
    bool Defined() const
    {
        return min_.x_ != M_INFINITY;
    }
    Vector2 Center() const { return (max_ + min_) * 0.5f; }
    Vector2 Size() const { return max_ - min_; }
    Vector2 HalfSize() const { return (max_ - min_) * 0.5f; }
    bool Equals(const Rect& rhs) const { return min_.Equals(rhs.min_) && max_.Equals(rhs.max_); }
    Intersection IsInside(const Vector2& point) const
    {
        if (point.x_ < min_.x_ || point.y_ < min_.y_ || point.x_ > max_.x_ || point.y_ > max_.y_)
            return OUTSIDE;
        else
            return INSIDE;
    }
    Intersection IsInside(const Rect& rect) const
    {
        if (rect.max_.x_ < min_.x_ || rect.min_.x_ > max_.x_ || rect.max_.y_ < min_.y_ || rect.min_.y_ > max_.y_)
            return OUTSIDE;
        else if (rect.min_.x_ < min_.x_ || rect.max_.x_ > max_.x_ || rect.min_.y_ < min_.y_ || rect.max_.y_ > max_.y_)
            return INTERSECTS;
        else
            return INSIDE;
    }
    const void* Data() const { return &min_.x_; }
    Vector4 ToVector4() const { return Vector4(min_.x_, min_.y_, max_.x_, max_.y_); }
    String ToString() const;
    Vector2 min_;
    Vector2 max_;
    static const Rect FULL;
    static const Rect POSITIVE;
    static const Rect ZERO;
};
class IntRect
{
public:
    IntRect() :
        left_(0),
        top_(0),
        right_(0),
        bottom_(0)
    {
    }
    IntRect(int left, int top, int right, int bottom) :
        left_(left),
        top_(top),
        right_(right),
        bottom_(bottom)
    {
    }
    IntRect(const int* data) :
        left_(data[0]),
        top_(data[1]),
        right_(data[2]),
        bottom_(data[3])
    {
    }
    bool operator ==(const IntRect& rhs) const
    {
        return left_ == rhs.left_ && top_ == rhs.top_ && right_ == rhs.right_ && bottom_ == rhs.bottom_;
    }
    bool operator !=(const IntRect& rhs) const
    {
        return left_ != rhs.left_ || top_ != rhs.top_ || right_ != rhs.right_ || bottom_ != rhs.bottom_;
    }
    IntVector2 Size() const { return IntVector2(Width(), Height()); }
    int Width() const { return right_ - left_; }
    int Height() const { return bottom_ - top_; }
    Intersection IsInside(const IntVector2& point) const
    {
        if (point.x_ < left_ || point.y_ < top_ || point.x_ >= right_ || point.y_ >= bottom_)
            return OUTSIDE;
        else
            return INSIDE;
    }
    const int* Data() const { return &left_; }
    String ToString() const;
    int left_;
    int top_;
    int right_;
    int bottom_;
    static const IntRect ZERO;
};
}
namespace Urho3D
{
class AreaAllocator
{
public:
    AreaAllocator();
    AreaAllocator(int width, int height, bool fastMode = true);
    AreaAllocator(int width, int height, int maxWidth, int maxHeight, bool fastMode = true);
    void Reset(int width, int height, int maxWidth = 0, int maxHeight = 0, bool fastMode = true);
    bool Allocate(int width, int height, int& x, int& y);
    int GetWidth() const { return size_.x_; }
    int GetHeight() const { return size_.y_; }
    bool GetFastMode() const { return fastMode_; }
private:
    bool SplitRect(unsigned freeAreaIndex, const IntRect& reserve);
    void Cleanup();
    PODVector<IntRect> freeAreas_;
    IntVector2 size_;
    IntVector2 maxSize_;
    bool doubleWidth_;
    bool fastMode_;
};
}
       
typedef int __m64 __attribute__ ((__vector_size__ (8), __may_alias__));
typedef int __v2si __attribute__ ((__vector_size__ (8)));
typedef short __v4hi __attribute__ ((__vector_size__ (8)));
typedef char __v8qi __attribute__ ((__vector_size__ (8)));
typedef long long __v1di __attribute__ ((__vector_size__ (8)));
typedef float __v2sf __attribute__ ((__vector_size__ (8)));
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_empty (void)
{
  __builtin_ia32_emms ();
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_empty (void)
{
  _mm_empty ();
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi32_si64 (int __i)
{
  return (__m64) __builtin_ia32_vec_init_v2si (__i, 0);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_from_int (int __i)
{
  return _mm_cvtsi32_si64 (__i);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_from_int64 (long long __i)
{
  return (__m64) __i;
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_m64 (long long __i)
{
  return (__m64) __i;
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64x_si64 (long long __i)
{
  return (__m64) __i;
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pi64x (long long __i)
{
  return (__m64) __i;
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_si32 (__m64 __i)
{
  return __builtin_ia32_vec_ext_v2si ((__v2si)__i, 0);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_to_int (__m64 __i)
{
  return _mm_cvtsi64_si32 (__i);
}
extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_to_int64 (__m64 __i)
{
  return (long long)__i;
}
extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtm64_si64 (__m64 __i)
{
  return (long long)__i;
}
extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_si64x (__m64 __i)
{
  return (long long)__i;
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packs_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_packsswb ((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_packsswb (__m64 __m1, __m64 __m2)
{
  return _mm_packs_pi16 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packs_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_packssdw ((__v2si)__m1, (__v2si)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_packssdw (__m64 __m1, __m64 __m2)
{
  return _mm_packs_pi32 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packs_pu16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_packuswb ((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_packuswb (__m64 __m1, __m64 __m2)
{
  return _mm_packs_pu16 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpckhbw ((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpckhbw (__m64 __m1, __m64 __m2)
{
  return _mm_unpackhi_pi8 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpckhwd ((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpckhwd (__m64 __m1, __m64 __m2)
{
  return _mm_unpackhi_pi16 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpckhdq ((__v2si)__m1, (__v2si)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpckhdq (__m64 __m1, __m64 __m2)
{
  return _mm_unpackhi_pi32 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpcklbw ((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpcklbw (__m64 __m1, __m64 __m2)
{
  return _mm_unpacklo_pi8 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpcklwd ((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpcklwd (__m64 __m1, __m64 __m2)
{
  return _mm_unpacklo_pi16 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_punpckldq ((__v2si)__m1, (__v2si)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_punpckldq (__m64 __m1, __m64 __m2)
{
  return _mm_unpacklo_pi32 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddb ((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddb (__m64 __m1, __m64 __m2)
{
  return _mm_add_pi8 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddw ((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddw (__m64 __m1, __m64 __m2)
{
  return _mm_add_pi16 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddd ((__v2si)__m1, (__v2si)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddd (__m64 __m1, __m64 __m2)
{
  return _mm_add_pi32 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_si64 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddq ((__v1di)__m1, (__v1di)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddsb ((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddsb (__m64 __m1, __m64 __m2)
{
  return _mm_adds_pi8 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddsw ((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddsw (__m64 __m1, __m64 __m2)
{
  return _mm_adds_pi16 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_pu8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddusb ((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddusb (__m64 __m1, __m64 __m2)
{
  return _mm_adds_pu8 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_pu16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_paddusw ((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_paddusw (__m64 __m1, __m64 __m2)
{
  return _mm_adds_pu16 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubb ((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubb (__m64 __m1, __m64 __m2)
{
  return _mm_sub_pi8 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubw ((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubw (__m64 __m1, __m64 __m2)
{
  return _mm_sub_pi16 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubd ((__v2si)__m1, (__v2si)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubd (__m64 __m1, __m64 __m2)
{
  return _mm_sub_pi32 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_si64 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubq ((__v1di)__m1, (__v1di)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubsb ((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubsb (__m64 __m1, __m64 __m2)
{
  return _mm_subs_pi8 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubsw ((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubsw (__m64 __m1, __m64 __m2)
{
  return _mm_subs_pi16 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_pu8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubusb ((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubusb (__m64 __m1, __m64 __m2)
{
  return _mm_subs_pu8 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_pu16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_psubusw ((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psubusw (__m64 __m1, __m64 __m2)
{
  return _mm_subs_pu16 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_madd_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pmaddwd ((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmaddwd (__m64 __m1, __m64 __m2)
{
  return _mm_madd_pi16 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mulhi_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pmulhw ((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmulhw (__m64 __m1, __m64 __m2)
{
  return _mm_mulhi_pi16 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mullo_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pmullw ((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmullw (__m64 __m1, __m64 __m2)
{
  return _mm_mullo_pi16 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_pi16 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psllw ((__v4hi)__m, (__v4hi)__count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psllw (__m64 __m, __m64 __count)
{
  return _mm_sll_pi16 (__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_pi16 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psllwi ((__v4hi)__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psllwi (__m64 __m, int __count)
{
  return _mm_slli_pi16 (__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_pi32 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_pslld ((__v2si)__m, (__v2si)__count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pslld (__m64 __m, __m64 __count)
{
  return _mm_sll_pi32 (__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_pi32 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_pslldi ((__v2si)__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pslldi (__m64 __m, int __count)
{
  return _mm_slli_pi32 (__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_si64 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psllq ((__v1di)__m, (__v1di)__count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psllq (__m64 __m, __m64 __count)
{
  return _mm_sll_si64 (__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_si64 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psllqi ((__v1di)__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psllqi (__m64 __m, int __count)
{
  return _mm_slli_si64 (__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sra_pi16 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psraw ((__v4hi)__m, (__v4hi)__count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psraw (__m64 __m, __m64 __count)
{
  return _mm_sra_pi16 (__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srai_pi16 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psrawi ((__v4hi)__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrawi (__m64 __m, int __count)
{
  return _mm_srai_pi16 (__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sra_pi32 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psrad ((__v2si)__m, (__v2si)__count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrad (__m64 __m, __m64 __count)
{
  return _mm_sra_pi32 (__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srai_pi32 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psradi ((__v2si)__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psradi (__m64 __m, int __count)
{
  return _mm_srai_pi32 (__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_pi16 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psrlw ((__v4hi)__m, (__v4hi)__count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrlw (__m64 __m, __m64 __count)
{
  return _mm_srl_pi16 (__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_pi16 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psrlwi ((__v4hi)__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrlwi (__m64 __m, int __count)
{
  return _mm_srli_pi16 (__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_pi32 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psrld ((__v2si)__m, (__v2si)__count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrld (__m64 __m, __m64 __count)
{
  return _mm_srl_pi32 (__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_pi32 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psrldi ((__v2si)__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrldi (__m64 __m, int __count)
{
  return _mm_srli_pi32 (__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_si64 (__m64 __m, __m64 __count)
{
  return (__m64) __builtin_ia32_psrlq ((__v1di)__m, (__v1di)__count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrlq (__m64 __m, __m64 __count)
{
  return _mm_srl_si64 (__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_si64 (__m64 __m, int __count)
{
  return (__m64) __builtin_ia32_psrlqi ((__v1di)__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psrlqi (__m64 __m, int __count)
{
  return _mm_srli_si64 (__m, __count);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_and_si64 (__m64 __m1, __m64 __m2)
{
  return __builtin_ia32_pand (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pand (__m64 __m1, __m64 __m2)
{
  return _mm_and_si64 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_andnot_si64 (__m64 __m1, __m64 __m2)
{
  return __builtin_ia32_pandn (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pandn (__m64 __m1, __m64 __m2)
{
  return _mm_andnot_si64 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_or_si64 (__m64 __m1, __m64 __m2)
{
  return __builtin_ia32_por (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_por (__m64 __m1, __m64 __m2)
{
  return _mm_or_si64 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_xor_si64 (__m64 __m1, __m64 __m2)
{
  return __builtin_ia32_pxor (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pxor (__m64 __m1, __m64 __m2)
{
  return _mm_xor_si64 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpeqb ((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpeqb (__m64 __m1, __m64 __m2)
{
  return _mm_cmpeq_pi8 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_pi8 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpgtb ((__v8qi)__m1, (__v8qi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpgtb (__m64 __m1, __m64 __m2)
{
  return _mm_cmpgt_pi8 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpeqw ((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpeqw (__m64 __m1, __m64 __m2)
{
  return _mm_cmpeq_pi16 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_pi16 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpgtw ((__v4hi)__m1, (__v4hi)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpgtw (__m64 __m1, __m64 __m2)
{
  return _mm_cmpgt_pi16 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpeqd ((__v2si)__m1, (__v2si)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpeqd (__m64 __m1, __m64 __m2)
{
  return _mm_cmpeq_pi32 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_pi32 (__m64 __m1, __m64 __m2)
{
  return (__m64) __builtin_ia32_pcmpgtd ((__v2si)__m1, (__v2si)__m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pcmpgtd (__m64 __m1, __m64 __m2)
{
  return _mm_cmpgt_pi32 (__m1, __m2);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setzero_si64 (void)
{
  return (__m64)0LL;
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pi32 (int __i1, int __i0)
{
  return (__m64) __builtin_ia32_vec_init_v2si (__i0, __i1);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pi16 (short __w3, short __w2, short __w1, short __w0)
{
  return (__m64) __builtin_ia32_vec_init_v4hi (__w0, __w1, __w2, __w3);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pi8 (char __b7, char __b6, char __b5, char __b4,
      char __b3, char __b2, char __b1, char __b0)
{
  return (__m64) __builtin_ia32_vec_init_v8qi (__b0, __b1, __b2, __b3,
            __b4, __b5, __b6, __b7);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_pi32 (int __i0, int __i1)
{
  return _mm_set_pi32 (__i1, __i0);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_pi16 (short __w0, short __w1, short __w2, short __w3)
{
  return _mm_set_pi16 (__w3, __w2, __w1, __w0);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_pi8 (char __b0, char __b1, char __b2, char __b3,
       char __b4, char __b5, char __b6, char __b7)
{
  return _mm_set_pi8 (__b7, __b6, __b5, __b4, __b3, __b2, __b1, __b0);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_pi32 (int __i)
{
  return _mm_set_pi32 (__i, __i);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_pi16 (short __w)
{
  return _mm_set_pi16 (__w, __w, __w, __w);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_pi8 (char __b)
{
  return _mm_set_pi8 (__b, __b, __b, __b, __b, __b, __b, __b);
}
extern "C" int posix_memalign (void **, size_t, size_t) throw ();
static __inline void *
_mm_malloc (size_t size, size_t alignment)
{
  void *ptr;
  if (alignment == 1)
    return malloc (size);
  if (alignment == 2 || (sizeof (void *) == 8 && alignment == 4))
    alignment = sizeof (void *);
  if (posix_memalign (&ptr, alignment, size) == 0)
    return ptr;
  else
    return __null;
}
static __inline void
_mm_free (void * ptr)
{
  free (ptr);
}
enum _mm_hint
{
  _MM_HINT_ET0 = 7,
  _MM_HINT_ET1 = 6,
  _MM_HINT_T0 = 3,
  _MM_HINT_T1 = 2,
  _MM_HINT_T2 = 1,
  _MM_HINT_NTA = 0
};
typedef float __m128 __attribute__ ((__vector_size__ (16), __may_alias__));
typedef float __v4sf __attribute__ ((__vector_size__ (16)));
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_undefined_ps (void)
{
  __m128 __Y = __Y;
  return __Y;
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setzero_ps (void)
{
  return __extension__ (__m128){ 0.0f, 0.0f, 0.0f, 0.0f };
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_addss ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_subss ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_mulss ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_div_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_divss ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sqrt_ss (__m128 __A)
{
  return (__m128) __builtin_ia32_sqrtss ((__v4sf)__A);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_rcp_ss (__m128 __A)
{
  return (__m128) __builtin_ia32_rcpss ((__v4sf)__A);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_rsqrt_ss (__m128 __A)
{
  return (__m128) __builtin_ia32_rsqrtss ((__v4sf)__A);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_minss ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_maxss ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_ps (__m128 __A, __m128 __B)
{
  return (__m128) ((__v4sf)__A + (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_ps (__m128 __A, __m128 __B)
{
  return (__m128) ((__v4sf)__A - (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_ps (__m128 __A, __m128 __B)
{
  return (__m128) ((__v4sf)__A * (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_div_ps (__m128 __A, __m128 __B)
{
  return (__m128) ((__v4sf)__A / (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sqrt_ps (__m128 __A)
{
  return (__m128) __builtin_ia32_sqrtps ((__v4sf)__A);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_rcp_ps (__m128 __A)
{
  return (__m128) __builtin_ia32_rcpps ((__v4sf)__A);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_rsqrt_ps (__m128 __A)
{
  return (__m128) __builtin_ia32_rsqrtps ((__v4sf)__A);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_minps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_maxps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_and_ps (__m128 __A, __m128 __B)
{
  return __builtin_ia32_andps (__A, __B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_andnot_ps (__m128 __A, __m128 __B)
{
  return __builtin_ia32_andnps (__A, __B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_or_ps (__m128 __A, __m128 __B)
{
  return __builtin_ia32_orps (__A, __B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_xor_ps (__m128 __A, __m128 __B)
{
  return __builtin_ia32_xorps (__A, __B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpeqss ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpltss ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmple_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpless ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf) __A,
     (__v4sf)
     __builtin_ia32_cmpltss ((__v4sf) __B,
        (__v4sf)
        __A));
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpge_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf) __A,
     (__v4sf)
     __builtin_ia32_cmpless ((__v4sf) __B,
        (__v4sf)
        __A));
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpneq_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpneqss ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnlt_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpnltss ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnle_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpnless ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpngt_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf) __A,
     (__v4sf)
     __builtin_ia32_cmpnltss ((__v4sf) __B,
         (__v4sf)
         __A));
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnge_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf) __A,
     (__v4sf)
     __builtin_ia32_cmpnless ((__v4sf) __B,
         (__v4sf)
         __A));
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpord_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpordss ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpunord_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpunordss ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpeqps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpltps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmple_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpleps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpgtps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpge_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpgeps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpneq_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpneqps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnlt_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpnltps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnle_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpnleps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpngt_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpngtps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnge_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpngeps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpord_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpordps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpunord_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_cmpunordps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comieq_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comieq ((__v4sf)__A, (__v4sf)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comilt_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comilt ((__v4sf)__A, (__v4sf)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comile_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comile ((__v4sf)__A, (__v4sf)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comigt_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comigt ((__v4sf)__A, (__v4sf)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comige_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comige ((__v4sf)__A, (__v4sf)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comineq_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_comineq ((__v4sf)__A, (__v4sf)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomieq_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomieq ((__v4sf)__A, (__v4sf)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomilt_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomilt ((__v4sf)__A, (__v4sf)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomile_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomile ((__v4sf)__A, (__v4sf)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomigt_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomigt ((__v4sf)__A, (__v4sf)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomige_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomige ((__v4sf)__A, (__v4sf)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomineq_ss (__m128 __A, __m128 __B)
{
  return __builtin_ia32_ucomineq ((__v4sf)__A, (__v4sf)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtss_si32 (__m128 __A)
{
  return __builtin_ia32_cvtss2si ((__v4sf) __A);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvt_ss2si (__m128 __A)
{
  return _mm_cvtss_si32 (__A);
}
extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtss_si64 (__m128 __A)
{
  return __builtin_ia32_cvtss2si64 ((__v4sf) __A);
}
extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtss_si64x (__m128 __A)
{
  return __builtin_ia32_cvtss2si64 ((__v4sf) __A);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtps_pi32 (__m128 __A)
{
  return (__m64) __builtin_ia32_cvtps2pi ((__v4sf) __A);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvt_ps2pi (__m128 __A)
{
  return _mm_cvtps_pi32 (__A);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttss_si32 (__m128 __A)
{
  return __builtin_ia32_cvttss2si ((__v4sf) __A);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtt_ss2si (__m128 __A)
{
  return _mm_cvttss_si32 (__A);
}
extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttss_si64 (__m128 __A)
{
  return __builtin_ia32_cvttss2si64 ((__v4sf) __A);
}
extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttss_si64x (__m128 __A)
{
  return __builtin_ia32_cvttss2si64 ((__v4sf) __A);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttps_pi32 (__m128 __A)
{
  return (__m64) __builtin_ia32_cvttps2pi ((__v4sf) __A);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtt_ps2pi (__m128 __A)
{
  return _mm_cvttps_pi32 (__A);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi32_ss (__m128 __A, int __B)
{
  return (__m128) __builtin_ia32_cvtsi2ss ((__v4sf) __A, __B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvt_si2ss (__m128 __A, int __B)
{
  return _mm_cvtsi32_ss (__A, __B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_ss (__m128 __A, long long __B)
{
  return (__m128) __builtin_ia32_cvtsi642ss ((__v4sf) __A, __B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64x_ss (__m128 __A, long long __B)
{
  return (__m128) __builtin_ia32_cvtsi642ss ((__v4sf) __A, __B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpi32_ps (__m128 __A, __m64 __B)
{
  return (__m128) __builtin_ia32_cvtpi2ps ((__v4sf) __A, (__v2si)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvt_pi2ps (__m128 __A, __m64 __B)
{
  return _mm_cvtpi32_ps (__A, __B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpi16_ps (__m64 __A)
{
  __v4hi __sign;
  __v2si __hisi, __losi;
  __v4sf __zero, __ra, __rb;
  __sign = __builtin_ia32_pcmpgtw ((__v4hi)0LL, (__v4hi)__A);
  __losi = (__v2si) __builtin_ia32_punpcklwd ((__v4hi)__A, __sign);
  __hisi = (__v2si) __builtin_ia32_punpckhwd ((__v4hi)__A, __sign);
  __zero = (__v4sf) _mm_setzero_ps ();
  __ra = __builtin_ia32_cvtpi2ps (__zero, __losi);
  __rb = __builtin_ia32_cvtpi2ps (__ra, __hisi);
  return (__m128) __builtin_ia32_movlhps (__ra, __rb);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpu16_ps (__m64 __A)
{
  __v2si __hisi, __losi;
  __v4sf __zero, __ra, __rb;
  __losi = (__v2si) __builtin_ia32_punpcklwd ((__v4hi)__A, (__v4hi)0LL);
  __hisi = (__v2si) __builtin_ia32_punpckhwd ((__v4hi)__A, (__v4hi)0LL);
  __zero = (__v4sf) _mm_setzero_ps ();
  __ra = __builtin_ia32_cvtpi2ps (__zero, __losi);
  __rb = __builtin_ia32_cvtpi2ps (__ra, __hisi);
  return (__m128) __builtin_ia32_movlhps (__ra, __rb);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpi8_ps (__m64 __A)
{
  __v8qi __sign;
  __sign = __builtin_ia32_pcmpgtb ((__v8qi)0LL, (__v8qi)__A);
  __A = (__m64) __builtin_ia32_punpcklbw ((__v8qi)__A, __sign);
  return _mm_cvtpi16_ps(__A);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpu8_ps(__m64 __A)
{
  __A = (__m64) __builtin_ia32_punpcklbw ((__v8qi)__A, (__v8qi)0LL);
  return _mm_cvtpu16_ps(__A);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpi32x2_ps(__m64 __A, __m64 __B)
{
  __v4sf __zero = (__v4sf) _mm_setzero_ps ();
  __v4sf __sfa = __builtin_ia32_cvtpi2ps (__zero, (__v2si)__A);
  __v4sf __sfb = __builtin_ia32_cvtpi2ps (__sfa, (__v2si)__B);
  return (__m128) __builtin_ia32_movlhps (__sfa, __sfb);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtps_pi16(__m128 __A)
{
  __v4sf __hisf = (__v4sf)__A;
  __v4sf __losf = __builtin_ia32_movhlps (__hisf, __hisf);
  __v2si __hisi = __builtin_ia32_cvtps2pi (__hisf);
  __v2si __losi = __builtin_ia32_cvtps2pi (__losf);
  return (__m64) __builtin_ia32_packssdw (__hisi, __losi);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtps_pi8(__m128 __A)
{
  __v4hi __tmp = (__v4hi) _mm_cvtps_pi16 (__A);
  return (__m64) __builtin_ia32_packsswb (__tmp, (__v4hi)0LL);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_unpckhps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_unpcklps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadh_pi (__m128 __A, __m64 const *__P)
{
  return (__m128) __builtin_ia32_loadhps ((__v4sf)__A, (const __v2sf *)__P);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storeh_pi (__m64 *__P, __m128 __A)
{
  __builtin_ia32_storehps ((__v2sf *)__P, (__v4sf)__A);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movehl_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movhlps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movelh_ps (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movlhps ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadl_pi (__m128 __A, __m64 const *__P)
{
  return (__m128) __builtin_ia32_loadlps ((__v4sf)__A, (const __v2sf *)__P);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storel_pi (__m64 *__P, __m128 __A)
{
  __builtin_ia32_storelps ((__v2sf *)__P, (__v4sf)__A);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movemask_ps (__m128 __A)
{
  return __builtin_ia32_movmskps ((__v4sf)__A);
}
extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_getcsr (void)
{
  return __builtin_ia32_stmxcsr ();
}
extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_GET_EXCEPTION_STATE (void)
{
  return _mm_getcsr() & 0x003f;
}
extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_GET_EXCEPTION_MASK (void)
{
  return _mm_getcsr() & 0x1f80;
}
extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_GET_ROUNDING_MODE (void)
{
  return _mm_getcsr() & 0x6000;
}
extern __inline unsigned int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_GET_FLUSH_ZERO_MODE (void)
{
  return _mm_getcsr() & 0x8000;
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setcsr (unsigned int __I)
{
  __builtin_ia32_ldmxcsr (__I);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_SET_EXCEPTION_STATE(unsigned int __mask)
{
  _mm_setcsr((_mm_getcsr() & ~0x003f) | __mask);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_SET_EXCEPTION_MASK (unsigned int __mask)
{
  _mm_setcsr((_mm_getcsr() & ~0x1f80) | __mask);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_SET_ROUNDING_MODE (unsigned int __mode)
{
  _mm_setcsr((_mm_getcsr() & ~0x6000) | __mode);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_MM_SET_FLUSH_ZERO_MODE (unsigned int __mode)
{
  _mm_setcsr((_mm_getcsr() & ~0x8000) | __mode);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_ss (float __F)
{
  return __extension__ (__m128)(__v4sf){ __F, 0.0f, 0.0f, 0.0f };
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_ps (float __F)
{
  return __extension__ (__m128)(__v4sf){ __F, __F, __F, __F };
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_ps1 (float __F)
{
  return _mm_set1_ps (__F);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_ss (float const *__P)
{
  return _mm_set_ss (*__P);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load1_ps (float const *__P)
{
  return _mm_set1_ps (*__P);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_ps1 (float const *__P)
{
  return _mm_load1_ps (__P);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_ps (float const *__P)
{
  return (__m128) *(__v4sf *)__P;
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadu_ps (float const *__P)
{
  return (__m128) __builtin_ia32_loadups (__P);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadr_ps (float const *__P)
{
  __v4sf __tmp = *(__v4sf *)__P;
  return (__m128) __builtin_ia32_shufps (__tmp, __tmp, (((0) << 6) | ((1) << 4) | ((2) << 2) | (3)));
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_ps (const float __Z, const float __Y, const float __X, const float __W)
{
  return __extension__ (__m128)(__v4sf){ __W, __X, __Y, __Z };
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_ps (float __Z, float __Y, float __X, float __W)
{
  return __extension__ (__m128)(__v4sf){ __Z, __Y, __X, __W };
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_ss (float *__P, __m128 __A)
{
  *__P = ((__v4sf)__A)[0];
}
extern __inline float __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtss_f32 (__m128 __A)
{
  return ((__v4sf)__A)[0];
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_ps (float *__P, __m128 __A)
{
  *(__v4sf *)__P = (__v4sf)__A;
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storeu_ps (float *__P, __m128 __A)
{
  __builtin_ia32_storeups (__P, (__v4sf)__A);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store1_ps (float *__P, __m128 __A)
{
  __v4sf __va = (__v4sf)__A;
  __v4sf __tmp = __builtin_ia32_shufps (__va, __va, (((0) << 6) | ((0) << 4) | ((0) << 2) | (0)));
  _mm_storeu_ps (__P, __tmp);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_ps1 (float *__P, __m128 __A)
{
  _mm_store1_ps (__P, __A);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storer_ps (float *__P, __m128 __A)
{
  __v4sf __va = (__v4sf)__A;
  __v4sf __tmp = __builtin_ia32_shufps (__va, __va, (((0) << 6) | ((1) << 4) | ((2) << 2) | (3)));
  _mm_store_ps (__P, __tmp);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_move_ss (__m128 __A, __m128 __B)
{
  return (__m128) __builtin_ia32_movss ((__v4sf)__A, (__v4sf)__B);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_pi16 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pmaxsw ((__v4hi)__A, (__v4hi)__B);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmaxsw (__m64 __A, __m64 __B)
{
  return _mm_max_pi16 (__A, __B);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_pu8 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pmaxub ((__v8qi)__A, (__v8qi)__B);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmaxub (__m64 __A, __m64 __B)
{
  return _mm_max_pu8 (__A, __B);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_pi16 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pminsw ((__v4hi)__A, (__v4hi)__B);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pminsw (__m64 __A, __m64 __B)
{
  return _mm_min_pi16 (__A, __B);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_pu8 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pminub ((__v8qi)__A, (__v8qi)__B);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pminub (__m64 __A, __m64 __B)
{
  return _mm_min_pu8 (__A, __B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movemask_pi8 (__m64 __A)
{
  return __builtin_ia32_pmovmskb ((__v8qi)__A);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmovmskb (__m64 __A)
{
  return _mm_movemask_pi8 (__A);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mulhi_pu16 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pmulhuw ((__v4hi)__A, (__v4hi)__B);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pmulhuw (__m64 __A, __m64 __B)
{
  return _mm_mulhi_pu16 (__A, __B);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_maskmove_si64 (__m64 __A, __m64 __N, char *__P)
{
  __builtin_ia32_maskmovq ((__v8qi)__A, (__v8qi)__N, __P);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_maskmovq (__m64 __A, __m64 __N, char *__P)
{
  _mm_maskmove_si64 (__A, __N, __P);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_avg_pu8 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pavgb ((__v8qi)__A, (__v8qi)__B);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pavgb (__m64 __A, __m64 __B)
{
  return _mm_avg_pu8 (__A, __B);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_avg_pu16 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_pavgw ((__v4hi)__A, (__v4hi)__B);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_pavgw (__m64 __A, __m64 __B)
{
  return _mm_avg_pu16 (__A, __B);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sad_pu8 (__m64 __A, __m64 __B)
{
  return (__m64) __builtin_ia32_psadbw ((__v8qi)__A, (__v8qi)__B);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_m_psadbw (__m64 __A, __m64 __B)
{
  return _mm_sad_pu8 (__A, __B);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_pi (__m64 *__P, __m64 __A)
{
  __builtin_ia32_movntq ((unsigned long long *)__P, (unsigned long long)__A);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_ps (float *__P, __m128 __A)
{
  __builtin_ia32_movntps (__P, (__v4sf)__A);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sfence (void)
{
  __builtin_ia32_sfence ();
}
typedef double __v2df __attribute__ ((__vector_size__ (16)));
typedef long long __v2di __attribute__ ((__vector_size__ (16)));
typedef unsigned long long __v2du __attribute__ ((__vector_size__ (16)));
typedef int __v4si __attribute__ ((__vector_size__ (16)));
typedef unsigned int __v4su __attribute__ ((__vector_size__ (16)));
typedef short __v8hi __attribute__ ((__vector_size__ (16)));
typedef unsigned short __v8hu __attribute__ ((__vector_size__ (16)));
typedef char __v16qi __attribute__ ((__vector_size__ (16)));
typedef unsigned char __v16qu __attribute__ ((__vector_size__ (16)));
typedef long long __m128i __attribute__ ((__vector_size__ (16), __may_alias__));
typedef double __m128d __attribute__ ((__vector_size__ (16), __may_alias__));
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_sd (double __F)
{
  return __extension__ (__m128d){ __F, 0.0 };
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_pd (double __F)
{
  return __extension__ (__m128d){ __F, __F };
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pd1 (double __F)
{
  return _mm_set1_pd (__F);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_pd (double __W, double __X)
{
  return __extension__ (__m128d){ __X, __W };
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_pd (double __W, double __X)
{
  return __extension__ (__m128d){ __W, __X };
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_undefined_pd (void)
{
  __m128d __Y = __Y;
  return __Y;
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setzero_pd (void)
{
  return __extension__ (__m128d){ 0.0, 0.0 };
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_move_sd (__m128d __A, __m128d __B)
{
  return (__m128d) __builtin_ia32_movsd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_pd (double const *__P)
{
  return *(__m128d *)__P;
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadu_pd (double const *__P)
{
  return __builtin_ia32_loadupd (__P);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load1_pd (double const *__P)
{
  return _mm_set1_pd (*__P);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_sd (double const *__P)
{
  return _mm_set_sd (*__P);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_pd1 (double const *__P)
{
  return _mm_load1_pd (__P);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadr_pd (double const *__P)
{
  __m128d __tmp = _mm_load_pd (__P);
  return __builtin_ia32_shufpd (__tmp, __tmp, (((0) << 1) | (1)));
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_pd (double *__P, __m128d __A)
{
  *(__m128d *)__P = __A;
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storeu_pd (double *__P, __m128d __A)
{
  __builtin_ia32_storeupd (__P, __A);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_sd (double *__P, __m128d __A)
{
  *__P = ((__v2df)__A)[0];
}
extern __inline double __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsd_f64 (__m128d __A)
{
  return ((__v2df)__A)[0];
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storel_pd (double *__P, __m128d __A)
{
  _mm_store_sd (__P, __A);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storeh_pd (double *__P, __m128d __A)
{
  *__P = ((__v2df)__A)[1];
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store1_pd (double *__P, __m128d __A)
{
  _mm_store_pd (__P, __builtin_ia32_shufpd (__A, __A, (((0) << 1) | (0))));
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_pd1 (double *__P, __m128d __A)
{
  _mm_store1_pd (__P, __A);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storer_pd (double *__P, __m128d __A)
{
  _mm_store_pd (__P, __builtin_ia32_shufpd (__A, __A, (((0) << 1) | (1))));
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi128_si32 (__m128i __A)
{
  return __builtin_ia32_vec_ext_v4si ((__v4si)__A, 0);
}
extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi128_si64 (__m128i __A)
{
  return ((__v2di)__A)[0];
}
extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi128_si64x (__m128i __A)
{
  return ((__v2di)__A)[0];
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_pd (__m128d __A, __m128d __B)
{
  return (__m128d) ((__v2df)__A + (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_addsd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_pd (__m128d __A, __m128d __B)
{
  return (__m128d) ((__v2df)__A - (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_subsd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_pd (__m128d __A, __m128d __B)
{
  return (__m128d) ((__v2df)__A * (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_mulsd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_div_pd (__m128d __A, __m128d __B)
{
  return (__m128d) ((__v2df)__A / (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_div_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_divsd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sqrt_pd (__m128d __A)
{
  return (__m128d)__builtin_ia32_sqrtpd ((__v2df)__A);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sqrt_sd (__m128d __A, __m128d __B)
{
  __v2df __tmp = __builtin_ia32_movsd ((__v2df)__A, (__v2df)__B);
  return (__m128d)__builtin_ia32_sqrtsd ((__v2df)__tmp);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_minpd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_minsd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_maxpd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_maxsd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_and_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_andpd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_andnot_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_andnpd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_or_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_orpd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_xor_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_xorpd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpeqpd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpltpd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmple_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmplepd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpgtpd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpge_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpgepd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpneq_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpneqpd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnlt_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpnltpd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnle_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpnlepd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpngt_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpngtpd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnge_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpngepd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpord_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpordpd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpunord_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpunordpd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpeqsd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpltsd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmple_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmplesd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_sd (__m128d __A, __m128d __B)
{
  return (__m128d) __builtin_ia32_movsd ((__v2df) __A,
      (__v2df)
      __builtin_ia32_cmpltsd ((__v2df) __B,
         (__v2df)
         __A));
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpge_sd (__m128d __A, __m128d __B)
{
  return (__m128d) __builtin_ia32_movsd ((__v2df) __A,
      (__v2df)
      __builtin_ia32_cmplesd ((__v2df) __B,
         (__v2df)
         __A));
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpneq_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpneqsd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnlt_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpnltsd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnle_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpnlesd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpngt_sd (__m128d __A, __m128d __B)
{
  return (__m128d) __builtin_ia32_movsd ((__v2df) __A,
      (__v2df)
      __builtin_ia32_cmpnltsd ((__v2df) __B,
          (__v2df)
          __A));
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpnge_sd (__m128d __A, __m128d __B)
{
  return (__m128d) __builtin_ia32_movsd ((__v2df) __A,
      (__v2df)
      __builtin_ia32_cmpnlesd ((__v2df) __B,
          (__v2df)
          __A));
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpord_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpordsd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpunord_sd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_cmpunordsd ((__v2df)__A, (__v2df)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comieq_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdeq ((__v2df)__A, (__v2df)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comilt_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdlt ((__v2df)__A, (__v2df)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comile_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdle ((__v2df)__A, (__v2df)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comigt_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdgt ((__v2df)__A, (__v2df)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comige_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdge ((__v2df)__A, (__v2df)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_comineq_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_comisdneq ((__v2df)__A, (__v2df)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomieq_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdeq ((__v2df)__A, (__v2df)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomilt_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdlt ((__v2df)__A, (__v2df)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomile_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdle ((__v2df)__A, (__v2df)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomigt_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdgt ((__v2df)__A, (__v2df)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomige_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdge ((__v2df)__A, (__v2df)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_ucomineq_sd (__m128d __A, __m128d __B)
{
  return __builtin_ia32_ucomisdneq ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_epi64x (long long __q1, long long __q0)
{
  return __extension__ (__m128i)(__v2di){ __q0, __q1 };
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_epi64 (__m64 __q1, __m64 __q0)
{
  return _mm_set_epi64x ((long long)__q1, (long long)__q0);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_epi32 (int __q3, int __q2, int __q1, int __q0)
{
  return __extension__ (__m128i)(__v4si){ __q0, __q1, __q2, __q3 };
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_epi16 (short __q7, short __q6, short __q5, short __q4,
        short __q3, short __q2, short __q1, short __q0)
{
  return __extension__ (__m128i)(__v8hi){
    __q0, __q1, __q2, __q3, __q4, __q5, __q6, __q7 };
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set_epi8 (char __q15, char __q14, char __q13, char __q12,
       char __q11, char __q10, char __q09, char __q08,
       char __q07, char __q06, char __q05, char __q04,
       char __q03, char __q02, char __q01, char __q00)
{
  return __extension__ (__m128i)(__v16qi){
    __q00, __q01, __q02, __q03, __q04, __q05, __q06, __q07,
    __q08, __q09, __q10, __q11, __q12, __q13, __q14, __q15
  };
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_epi64x (long long __A)
{
  return _mm_set_epi64x (__A, __A);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_epi64 (__m64 __A)
{
  return _mm_set_epi64 (__A, __A);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_epi32 (int __A)
{
  return _mm_set_epi32 (__A, __A, __A, __A);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_epi16 (short __A)
{
  return _mm_set_epi16 (__A, __A, __A, __A, __A, __A, __A, __A);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_set1_epi8 (char __A)
{
  return _mm_set_epi8 (__A, __A, __A, __A, __A, __A, __A, __A,
         __A, __A, __A, __A, __A, __A, __A, __A);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_epi64 (__m64 __q0, __m64 __q1)
{
  return _mm_set_epi64 (__q1, __q0);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_epi32 (int __q0, int __q1, int __q2, int __q3)
{
  return _mm_set_epi32 (__q3, __q2, __q1, __q0);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_epi16 (short __q0, short __q1, short __q2, short __q3,
         short __q4, short __q5, short __q6, short __q7)
{
  return _mm_set_epi16 (__q7, __q6, __q5, __q4, __q3, __q2, __q1, __q0);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setr_epi8 (char __q00, char __q01, char __q02, char __q03,
        char __q04, char __q05, char __q06, char __q07,
        char __q08, char __q09, char __q10, char __q11,
        char __q12, char __q13, char __q14, char __q15)
{
  return _mm_set_epi8 (__q15, __q14, __q13, __q12, __q11, __q10, __q09, __q08,
         __q07, __q06, __q05, __q04, __q03, __q02, __q01, __q00);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_load_si128 (__m128i const *__P)
{
  return *__P;
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadu_si128 (__m128i const *__P)
{
  return (__m128i) __builtin_ia32_loaddqu ((char const *)__P);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadl_epi64 (__m128i const *__P)
{
  return _mm_set_epi64 ((__m64)0LL, *(__m64 *)__P);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_store_si128 (__m128i *__P, __m128i __B)
{
  *__P = __B;
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storeu_si128 (__m128i *__P, __m128i __B)
{
  __builtin_ia32_storedqu ((char *)__P, (__v16qi)__B);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_storel_epi64 (__m128i *__P, __m128i __B)
{
  *(long long *)__P = ((__v2di)__B)[0];
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movepi64_pi64 (__m128i __B)
{
  return (__m64) ((__v2di)__B)[0];
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movpi64_epi64 (__m64 __A)
{
  return _mm_set_epi64 ((__m64)0LL, __A);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_move_epi64 (__m128i __A)
{
  return (__m128i)__builtin_ia32_movq128 ((__v2di) __A);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_undefined_si128 (void)
{
  __m128i __Y = __Y;
  return __Y;
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_setzero_si128 (void)
{
  return __extension__ (__m128i)(__v4si){ 0, 0, 0, 0 };
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepi32_pd (__m128i __A)
{
  return (__m128d)__builtin_ia32_cvtdq2pd ((__v4si) __A);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtepi32_ps (__m128i __A)
{
  return (__m128)__builtin_ia32_cvtdq2ps ((__v4si) __A);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpd_epi32 (__m128d __A)
{
  return (__m128i)__builtin_ia32_cvtpd2dq ((__v2df) __A);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpd_pi32 (__m128d __A)
{
  return (__m64)__builtin_ia32_cvtpd2pi ((__v2df) __A);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpd_ps (__m128d __A)
{
  return (__m128)__builtin_ia32_cvtpd2ps ((__v2df) __A);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttpd_epi32 (__m128d __A)
{
  return (__m128i)__builtin_ia32_cvttpd2dq ((__v2df) __A);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttpd_pi32 (__m128d __A)
{
  return (__m64)__builtin_ia32_cvttpd2pi ((__v2df) __A);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtpi32_pd (__m64 __A)
{
  return (__m128d)__builtin_ia32_cvtpi2pd ((__v2si) __A);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtps_epi32 (__m128 __A)
{
  return (__m128i)__builtin_ia32_cvtps2dq ((__v4sf) __A);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttps_epi32 (__m128 __A)
{
  return (__m128i)__builtin_ia32_cvttps2dq ((__v4sf) __A);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtps_pd (__m128 __A)
{
  return (__m128d)__builtin_ia32_cvtps2pd ((__v4sf) __A);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsd_si32 (__m128d __A)
{
  return __builtin_ia32_cvtsd2si ((__v2df) __A);
}
extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsd_si64 (__m128d __A)
{
  return __builtin_ia32_cvtsd2si64 ((__v2df) __A);
}
extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsd_si64x (__m128d __A)
{
  return __builtin_ia32_cvtsd2si64 ((__v2df) __A);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttsd_si32 (__m128d __A)
{
  return __builtin_ia32_cvttsd2si ((__v2df) __A);
}
extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttsd_si64 (__m128d __A)
{
  return __builtin_ia32_cvttsd2si64 ((__v2df) __A);
}
extern __inline long long __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvttsd_si64x (__m128d __A)
{
  return __builtin_ia32_cvttsd2si64 ((__v2df) __A);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsd_ss (__m128 __A, __m128d __B)
{
  return (__m128)__builtin_ia32_cvtsd2ss ((__v4sf) __A, (__v2df) __B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi32_sd (__m128d __A, int __B)
{
  return (__m128d)__builtin_ia32_cvtsi2sd ((__v2df) __A, __B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_sd (__m128d __A, long long __B)
{
  return (__m128d)__builtin_ia32_cvtsi642sd ((__v2df) __A, __B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64x_sd (__m128d __A, long long __B)
{
  return (__m128d)__builtin_ia32_cvtsi642sd ((__v2df) __A, __B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtss_sd (__m128d __A, __m128 __B)
{
  return (__m128d)__builtin_ia32_cvtss2sd ((__v2df) __A, (__v4sf)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_unpckhpd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_pd (__m128d __A, __m128d __B)
{
  return (__m128d)__builtin_ia32_unpcklpd ((__v2df)__A, (__v2df)__B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadh_pd (__m128d __A, double const *__B)
{
  return (__m128d)__builtin_ia32_loadhpd ((__v2df)__A, __B);
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_loadl_pd (__m128d __A, double const *__B)
{
  return (__m128d)__builtin_ia32_loadlpd ((__v2df)__A, __B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movemask_pd (__m128d __A)
{
  return __builtin_ia32_movmskpd ((__v2df)__A);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packs_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_packsswb128 ((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packs_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_packssdw128 ((__v4si)__A, (__v4si)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_packus_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_packuswb128 ((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpckhbw128 ((__v16qi)__A, (__v16qi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpckhwd128 ((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpckhdq128 ((__v4si)__A, (__v4si)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpackhi_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpckhqdq128 ((__v2di)__A, (__v2di)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpcklbw128 ((__v16qi)__A, (__v16qi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpcklwd128 ((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpckldq128 ((__v4si)__A, (__v4si)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_unpacklo_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_punpcklqdq128 ((__v2di)__A, (__v2di)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v16qu)__A + (__v16qu)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hu)__A + (__v8hu)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v4su)__A + (__v4su)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_add_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v2du)__A + (__v2du)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_paddsb128 ((__v16qi)__A, (__v16qi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_paddsw128 ((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_paddusb128 ((__v16qi)__A, (__v16qi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_adds_epu16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_paddusw128 ((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v16qu)__A - (__v16qu)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hu)__A - (__v8hu)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v4su)__A - (__v4su)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sub_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v2du)__A - (__v2du)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psubsb128 ((__v16qi)__A, (__v16qi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psubsw128 ((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psubusb128 ((__v16qi)__A, (__v16qi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_subs_epu16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psubusw128 ((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_madd_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmaddwd128 ((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mulhi_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmulhw128 ((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mullo_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hu)__A * (__v8hu)__B);
}
extern __inline __m64 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_su32 (__m64 __A, __m64 __B)
{
  return (__m64)__builtin_ia32_pmuludq ((__v2si)__A, (__v2si)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mul_epu32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmuludq128 ((__v4si)__A, (__v4si)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_epi16 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psllwi128 ((__v8hi)__A, __B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_epi32 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_pslldi128 ((__v4si)__A, __B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_slli_epi64 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psllqi128 ((__v2di)__A, __B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srai_epi16 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psrawi128 ((__v8hi)__A, __B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srai_epi32 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psradi128 ((__v4si)__A, __B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_epi16 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psrlwi128 ((__v8hi)__A, __B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_epi32 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psrldi128 ((__v4si)__A, __B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srli_epi64 (__m128i __A, int __B)
{
  return (__m128i)__builtin_ia32_psrlqi128 ((__v2di)__A, __B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psllw128((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pslld128((__v4si)__A, (__v4si)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sll_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psllq128((__v2di)__A, (__v2di)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sra_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psraw128 ((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sra_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psrad128 ((__v4si)__A, (__v4si)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psrlw128 ((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psrld128 ((__v4si)__A, (__v4si)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_srl_epi64 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psrlq128 ((__v2di)__A, (__v2di)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_and_si128 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v2du)__A & (__v2du)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_andnot_si128 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pandn128 ((__v2di)__A, (__v2di)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_or_si128 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v2du)__A | (__v2du)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_xor_si128 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v2du)__A ^ (__v2du)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v16qi)__A == (__v16qi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hi)__A == (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpeq_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v4si)__A == (__v4si)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v16qi)__A < (__v16qi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hi)__A < (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmplt_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v4si)__A < (__v4si)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_epi8 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v16qi)__A > (__v16qi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v8hi)__A > (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cmpgt_epi32 (__m128i __A, __m128i __B)
{
  return (__m128i) ((__v4si)__A > (__v4si)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmaxsw128 ((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_max_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmaxub128 ((__v16qi)__A, (__v16qi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_epi16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pminsw128 ((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_min_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pminub128 ((__v16qi)__A, (__v16qi)__B);
}
extern __inline int __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_movemask_epi8 (__m128i __A)
{
  return __builtin_ia32_pmovmskb128 ((__v16qi)__A);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mulhi_epu16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pmulhuw128 ((__v8hi)__A, (__v8hi)__B);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_maskmoveu_si128 (__m128i __A, __m128i __B, char *__C)
{
  __builtin_ia32_maskmovdqu ((__v16qi)__A, (__v16qi)__B, __C);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_avg_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pavgb128 ((__v16qi)__A, (__v16qi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_avg_epu16 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_pavgw128 ((__v8hi)__A, (__v8hi)__B);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_sad_epu8 (__m128i __A, __m128i __B)
{
  return (__m128i)__builtin_ia32_psadbw128 ((__v16qi)__A, (__v16qi)__B);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_si32 (int *__A, int __B)
{
  __builtin_ia32_movnti (__A, __B);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_si64 (long long int *__A, long long int __B)
{
  __builtin_ia32_movnti64 (__A, __B);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_si128 (__m128i *__A, __m128i __B)
{
  __builtin_ia32_movntdq ((__v2di *)__A, (__v2di)__B);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_stream_pd (double *__A, __m128d __B)
{
  __builtin_ia32_movntpd (__A, (__v2df)__B);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_clflush (void const *__A)
{
  __builtin_ia32_clflush (__A);
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_lfence (void)
{
  __builtin_ia32_lfence ();
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_mfence (void)
{
  __builtin_ia32_mfence ();
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi32_si128 (int __A)
{
  return _mm_set_epi32 (0, 0, 0, __A);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64_si128 (long long __A)
{
  return _mm_set_epi64x (0, __A);
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_cvtsi64x_si128 (long long __A)
{
  return _mm_set_epi64x (0, __A);
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castpd_ps(__m128d __A)
{
  return (__m128) __A;
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castpd_si128(__m128d __A)
{
  return (__m128i) __A;
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castps_pd(__m128 __A)
{
  return (__m128d) __A;
}
extern __inline __m128i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castps_si128(__m128 __A)
{
  return (__m128i) __A;
}
extern __inline __m128 __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castsi128_ps(__m128i __A)
{
  return (__m128) __A;
}
extern __inline __m128d __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_castsi128_pd(__m128i __A)
{
  return (__m128d) __A;
}
extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm_pause (void)
{
  __builtin_ia32_pause ();
}
namespace Urho3D
{
class Polyhedron;
class Frustum;
class Matrix3;
class Matrix4;
class Matrix3x4;
class Sphere;
class BoundingBox
{
public:
    BoundingBox() :
        min_(M_INFINITY, M_INFINITY, M_INFINITY),
        max_(-M_INFINITY, -M_INFINITY, -M_INFINITY)
    {
    }
    BoundingBox(const BoundingBox& box) :
        min_(box.min_),
        max_(box.max_)
    {
    }
    BoundingBox(const Rect& rect) :
        min_(Vector3(rect.min_, 0.0f)),
        max_(Vector3(rect.max_, 0.0f))
    {
    }
    BoundingBox(const Vector3& min, const Vector3& max) :
        min_(min),
        max_(max)
    {
    }
    BoundingBox(float min, float max) :
        min_(Vector3(min, min, min)),
        max_(Vector3(max, max, max))
    {
    }
    BoundingBox(__m128 min, __m128 max)
    {
        _mm_storeu_ps(&min_.x_, min);
        _mm_storeu_ps(&max_.x_, max);
    }
    BoundingBox(const Vector3* vertices, unsigned count) :
        min_(M_INFINITY, M_INFINITY, M_INFINITY),
        max_(-M_INFINITY, -M_INFINITY, -M_INFINITY)
    {
        Define(vertices, count);
    }
    BoundingBox(const Frustum& frustum) :
        min_(M_INFINITY, M_INFINITY, M_INFINITY),
        max_(-M_INFINITY, -M_INFINITY, -M_INFINITY)
    {
        Define(frustum);
    }
    BoundingBox(const Polyhedron& poly) :
        min_(M_INFINITY, M_INFINITY, M_INFINITY),
        max_(-M_INFINITY, -M_INFINITY, -M_INFINITY)
    {
        Define(poly);
    }
    BoundingBox(const Sphere& sphere) :
        min_(M_INFINITY, M_INFINITY, M_INFINITY),
        max_(-M_INFINITY, -M_INFINITY, -M_INFINITY)
    {
        Define(sphere);
    }
    BoundingBox& operator =(const BoundingBox& rhs)
    {
        min_ = rhs.min_;
        max_ = rhs.max_;
        return *this;
    }
    BoundingBox& operator =(const Rect& rhs)
    {
        min_ = Vector3(rhs.min_, 0.0f);
        max_ = Vector3(rhs.max_, 0.0f);
        return *this;
    }
    bool operator ==(const BoundingBox& rhs) const { return (min_ == rhs.min_ && max_ == rhs.max_); }
    bool operator !=(const BoundingBox& rhs) const { return (min_ != rhs.min_ || max_ != rhs.max_); }
    void Define(const BoundingBox& box)
    {
        Define(box.min_, box.max_);
    }
    void Define(const Rect& rect)
    {
        Define(Vector3(rect.min_, 0.0f), Vector3(rect.max_, 0.0f));
    }
    void Define(const Vector3& min, const Vector3& max)
    {
        min_ = min;
        max_ = max;
    }
    void Define(float min, float max)
    {
        min_ = Vector3(min, min, min);
        max_ = Vector3(max, max, max);
    }
    void Define(const Vector3& point)
    {
        min_ = max_ = point;
    }
    void Merge(const Vector3& point)
    {
        __m128 vec = _mm_set_ps(1.f, point.z_, point.y_, point.x_);
        _mm_storeu_ps(&min_.x_, _mm_min_ps(_mm_loadu_ps(&min_.x_), vec));
        _mm_storeu_ps(&max_.x_, _mm_max_ps(_mm_loadu_ps(&max_.x_), vec));
    }
    void Merge(const BoundingBox& box)
    {
        _mm_storeu_ps(&min_.x_, _mm_min_ps(_mm_loadu_ps(&min_.x_), _mm_loadu_ps(&box.min_.x_)));
        _mm_storeu_ps(&max_.x_, _mm_max_ps(_mm_loadu_ps(&max_.x_), _mm_loadu_ps(&box.max_.x_)));
    }
    void Define(const Vector3* vertices, unsigned count);
    void Define(const Frustum& frustum);
    void Define(const Polyhedron& poly);
    void Define(const Sphere& sphere);
    void Merge(const Vector3* vertices, unsigned count);
    void Merge(const Frustum& frustum);
    void Merge(const Polyhedron& poly);
    void Merge(const Sphere& sphere);
    void Clip(const BoundingBox& box);
    void Transform(const Matrix3& transform);
    void Transform(const Matrix3x4& transform);
    void Clear()
    {
        _mm_storeu_ps(&min_.x_, _mm_set1_ps(M_INFINITY));
        _mm_storeu_ps(&max_.x_, _mm_set1_ps(-M_INFINITY));
    }
    bool Defined() const
    {
        return min_.x_ != M_INFINITY;
    }
    Vector3 Center() const { return (max_ + min_) * 0.5f; }
    Vector3 Size() const { return max_ - min_; }
    Vector3 HalfSize() const { return (max_ - min_) * 0.5f; }
    BoundingBox Transformed(const Matrix3& transform) const;
    BoundingBox Transformed(const Matrix3x4& transform) const;
    Rect Projected(const Matrix4& projection) const;
    Intersection IsInside(const Vector3& point) const
    {
        if (point.x_ < min_.x_ || point.x_ > max_.x_ || point.y_ < min_.y_ || point.y_ > max_.y_ ||
            point.z_ < min_.z_ || point.z_ > max_.z_)
            return OUTSIDE;
        else
            return INSIDE;
    }
    Intersection IsInside(const BoundingBox& box) const
    {
        if (box.max_.x_ < min_.x_ || box.min_.x_ > max_.x_ || box.max_.y_ < min_.y_ || box.min_.y_ > max_.y_ ||
            box.max_.z_ < min_.z_ || box.min_.z_ > max_.z_)
            return OUTSIDE;
        else if (box.min_.x_ < min_.x_ || box.max_.x_ > max_.x_ || box.min_.y_ < min_.y_ || box.max_.y_ > max_.y_ ||
                 box.min_.z_ < min_.z_ || box.max_.z_ > max_.z_)
            return INTERSECTS;
        else
            return INSIDE;
    }
    Intersection IsInsideFast(const BoundingBox& box) const
    {
        if (box.max_.x_ < min_.x_ || box.min_.x_ > max_.x_ || box.max_.y_ < min_.y_ || box.min_.y_ > max_.y_ ||
            box.max_.z_ < min_.z_ || box.min_.z_ > max_.z_)
            return OUTSIDE;
        else
            return INSIDE;
    }
    Intersection IsInside(const Sphere& sphere) const;
    Intersection IsInsideFast(const Sphere& sphere) const;
    String ToString() const;
    Vector3 min_;
    float dummyMin_;
    Vector3 max_;
    float dummyMax_;
};
}
       
namespace Urho3D
{
class String;
class Color
{
public:
    Color() :
        r_(1.0f),
        g_(1.0f),
        b_(1.0f),
        a_(1.0f)
    {
    }
    Color(const Color& color) :
        r_(color.r_),
        g_(color.g_),
        b_(color.b_),
        a_(color.a_)
    {
    }
    Color(const Color& color, float a) :
        r_(color.r_),
        g_(color.g_),
        b_(color.b_),
        a_(a)
    {
    }
    Color(float r, float g, float b) :
        r_(r),
        g_(g),
        b_(b),
        a_(1.0f)
    {
    }
    Color(float r, float g, float b, float a) :
        r_(r),
        g_(g),
        b_(b),
        a_(a)
    {
    }
    explicit Color(const float* data) :
        r_(data[0]),
        g_(data[1]),
        b_(data[2]),
        a_(data[3])
    {
    }
    Color& operator =(const Color& rhs)
    {
        r_ = rhs.r_;
        g_ = rhs.g_;
        b_ = rhs.b_;
        a_ = rhs.a_;
        return *this;
    }
    bool operator ==(const Color& rhs) const { return r_ == rhs.r_ && g_ == rhs.g_ && b_ == rhs.b_ && a_ == rhs.a_; }
    bool operator !=(const Color& rhs) const { return r_ != rhs.r_ || g_ != rhs.g_ || b_ != rhs.b_ || a_ != rhs.a_; }
    Color operator *(float rhs) const { return Color(r_ * rhs, g_ * rhs, b_ * rhs, a_ * rhs); }
    Color operator +(const Color& rhs) const { return Color(r_ + rhs.r_, g_ + rhs.g_, b_ + rhs.b_, a_ + rhs.a_); }
    Color operator -() const { return Color(-r_, -g_, -b_, -a_); }
    Color operator -(const Color& rhs) const { return Color(r_ - rhs.r_, g_ - rhs.g_, b_ - rhs.b_, a_ - rhs.a_); }
    Color& operator +=(const Color& rhs)
    {
        r_ += rhs.r_;
        g_ += rhs.g_;
        b_ += rhs.b_;
        a_ += rhs.a_;
        return *this;
    }
    const float* Data() const { return &r_; }
    unsigned ToUInt() const;
    Vector3 ToHSL() const;
    Vector3 ToHSV() const;
    void FromHSL(float h, float s, float l, float a = 1.0f);
    void FromHSV(float h, float s, float v, float a = 1.0f);
    Vector3 ToVector3() const { return Vector3(r_, g_, b_); }
    Vector4 ToVector4() const { return Vector4(r_, g_, b_, a_); }
    float SumRGB() const { return r_ + g_ + b_; }
    float Average() const { return (r_ + g_ + b_) / 3.0f; }
    float Luma() const { return r_ * 0.299f + g_ * 0.587f + b_ * 0.114f; }
    float Chroma() const;
    float Hue() const;
    float SaturationHSL() const;
    float SaturationHSV() const;
    float Value() const { return MaxRGB(); }
    float Lightness() const;
    void Bounds(float* min, float* max, bool clipped = false) const;
    float MaxRGB() const;
    float MinRGB() const;
    float Range() const;
    void Clip(bool clipAlpha = false);
    void Invert(bool invertAlpha = false);
    Color Lerp(const Color& rhs, float t) const;
    Color Abs() const { return Color(Urho3D::Abs(r_), Urho3D::Abs(g_), Urho3D::Abs(b_), Urho3D::Abs(a_)); }
    bool Equals(const Color& rhs) const
    {
        return Urho3D::Equals(r_, rhs.r_) && Urho3D::Equals(g_, rhs.g_) && Urho3D::Equals(b_, rhs.b_) && Urho3D::Equals(a_, rhs.a_);
    }
    String ToString() const;
    float r_;
    float g_;
    float b_;
    float a_;
    static const Color WHITE;
    static const Color GRAY;
    static const Color BLACK;
    static const Color RED;
    static const Color GREEN;
    static const Color BLUE;
    static const Color CYAN;
    static const Color MAGENTA;
    static const Color YELLOW;
    static const Color TRANSPARENT;
protected:
    float Hue(float min, float max) const;
    float SaturationHSV(float min, float max) const;
    float SaturationHSL(float min, float max) const;
    void FromHCM(float h, float c, float m);
};
inline Color operator *(float lhs, const Color& rhs) { return rhs * lhs; }
}
       
       
       
       
       
namespace Urho3D
{
class Matrix3
{
public:
    Matrix3() :
        m00_(1.0f),
        m01_(0.0f),
        m02_(0.0f),
        m10_(0.0f),
        m11_(1.0f),
        m12_(0.0f),
        m20_(0.0f),
        m21_(0.0f),
        m22_(1.0f)
    {
    }
    Matrix3(const Matrix3& matrix) :
        m00_(matrix.m00_),
        m01_(matrix.m01_),
        m02_(matrix.m02_),
        m10_(matrix.m10_),
        m11_(matrix.m11_),
        m12_(matrix.m12_),
        m20_(matrix.m20_),
        m21_(matrix.m21_),
        m22_(matrix.m22_)
    {
    }
    Matrix3(float v00, float v01, float v02,
            float v10, float v11, float v12,
            float v20, float v21, float v22) :
        m00_(v00),
        m01_(v01),
        m02_(v02),
        m10_(v10),
        m11_(v11),
        m12_(v12),
        m20_(v20),
        m21_(v21),
        m22_(v22)
    {
    }
    explicit Matrix3(const float* data) :
        m00_(data[0]),
        m01_(data[1]),
        m02_(data[2]),
        m10_(data[3]),
        m11_(data[4]),
        m12_(data[5]),
        m20_(data[6]),
        m21_(data[7]),
        m22_(data[8])
    {
    }
    Matrix3& operator =(const Matrix3& rhs)
    {
        m00_ = rhs.m00_;
        m01_ = rhs.m01_;
        m02_ = rhs.m02_;
        m10_ = rhs.m10_;
        m11_ = rhs.m11_;
        m12_ = rhs.m12_;
        m20_ = rhs.m20_;
        m21_ = rhs.m21_;
        m22_ = rhs.m22_;
        return *this;
    }
    bool operator ==(const Matrix3& rhs) const
    {
        const float* leftData = Data();
        const float* rightData = rhs.Data();
        for (unsigned i = 0; i < 9; ++i)
        {
            if (leftData[i] != rightData[i])
                return false;
        }
        return true;
    }
    bool operator !=(const Matrix3& rhs) const { return !(*this == rhs); }
    Vector3 operator *(const Vector3& rhs) const
    {
        return Vector3(
            m00_ * rhs.x_ + m01_ * rhs.y_ + m02_ * rhs.z_,
            m10_ * rhs.x_ + m11_ * rhs.y_ + m12_ * rhs.z_,
            m20_ * rhs.x_ + m21_ * rhs.y_ + m22_ * rhs.z_
        );
    }
    Matrix3 operator +(const Matrix3& rhs) const
    {
        return Matrix3(
            m00_ + rhs.m00_,
            m01_ + rhs.m01_,
            m02_ + rhs.m02_,
            m10_ + rhs.m10_,
            m11_ + rhs.m11_,
            m12_ + rhs.m12_,
            m20_ + rhs.m20_,
            m21_ + rhs.m21_,
            m22_ + rhs.m22_
        );
    }
    Matrix3 operator -(const Matrix3& rhs) const
    {
        return Matrix3(
            m00_ - rhs.m00_,
            m01_ - rhs.m01_,
            m02_ - rhs.m02_,
            m10_ - rhs.m10_,
            m11_ - rhs.m11_,
            m12_ - rhs.m12_,
            m20_ - rhs.m20_,
            m21_ - rhs.m21_,
            m22_ - rhs.m22_
        );
    }
    Matrix3 operator *(float rhs) const
    {
        return Matrix3(
            m00_ * rhs,
            m01_ * rhs,
            m02_ * rhs,
            m10_ * rhs,
            m11_ * rhs,
            m12_ * rhs,
            m20_ * rhs,
            m21_ * rhs,
            m22_ * rhs
        );
    }
    Matrix3 operator *(const Matrix3& rhs) const
    {
        return Matrix3(
            m00_ * rhs.m00_ + m01_ * rhs.m10_ + m02_ * rhs.m20_,
            m00_ * rhs.m01_ + m01_ * rhs.m11_ + m02_ * rhs.m21_,
            m00_ * rhs.m02_ + m01_ * rhs.m12_ + m02_ * rhs.m22_,
            m10_ * rhs.m00_ + m11_ * rhs.m10_ + m12_ * rhs.m20_,
            m10_ * rhs.m01_ + m11_ * rhs.m11_ + m12_ * rhs.m21_,
            m10_ * rhs.m02_ + m11_ * rhs.m12_ + m12_ * rhs.m22_,
            m20_ * rhs.m00_ + m21_ * rhs.m10_ + m22_ * rhs.m20_,
            m20_ * rhs.m01_ + m21_ * rhs.m11_ + m22_ * rhs.m21_,
            m20_ * rhs.m02_ + m21_ * rhs.m12_ + m22_ * rhs.m22_
        );
    }
    void SetScale(const Vector3& scale)
    {
        m00_ = scale.x_;
        m11_ = scale.y_;
        m22_ = scale.z_;
    }
    void SetScale(float scale)
    {
        m00_ = scale;
        m11_ = scale;
        m22_ = scale;
    }
    Vector3 Scale() const
    {
        return Vector3(
            sqrtf(m00_ * m00_ + m10_ * m10_ + m20_ * m20_),
            sqrtf(m01_ * m01_ + m11_ * m11_ + m21_ * m21_),
            sqrtf(m02_ * m02_ + m12_ * m12_ + m22_ * m22_)
        );
    }
    Vector3 SignedScale(const Matrix3& rotation) const
    {
        return Vector3(
            rotation.m00_ * m00_ + rotation.m10_ * m10_ + rotation.m20_ * m20_,
            rotation.m01_ * m01_ + rotation.m11_ * m11_ + rotation.m21_ * m21_,
            rotation.m02_ * m02_ + rotation.m12_ * m12_ + rotation.m22_ * m22_
        );
    }
    Matrix3 Transpose() const
    {
        return Matrix3(
            m00_,
            m10_,
            m20_,
            m01_,
            m11_,
            m21_,
            m02_,
            m12_,
            m22_
        );
    }
    Matrix3 Scaled(const Vector3& scale) const
    {
        return Matrix3(
            m00_ * scale.x_,
            m01_ * scale.y_,
            m02_ * scale.z_,
            m10_ * scale.x_,
            m11_ * scale.y_,
            m12_ * scale.z_,
            m20_ * scale.x_,
            m21_ * scale.y_,
            m22_ * scale.z_
        );
    }
    bool Equals(const Matrix3& rhs) const
    {
        const float* leftData = Data();
        const float* rightData = rhs.Data();
        for (unsigned i = 0; i < 9; ++i)
        {
            if (!Urho3D::Equals(leftData[i], rightData[i]))
                return false;
        }
        return true;
    }
    Matrix3 Inverse() const;
    const float* Data() const { return &m00_; }
    float Element(unsigned i, unsigned j) const { return Data()[i * 3 + j]; }
    Vector3 Row(unsigned i) const { return Vector3(Element(i, 0), Element(i, 1), Element(i, 2)); }
    Vector3 Column(unsigned j) const { return Vector3(Element(0, j), Element(1, j), Element(2, j)); }
    String ToString() const;
    float m00_;
    float m01_;
    float m02_;
    float m10_;
    float m11_;
    float m12_;
    float m20_;
    float m21_;
    float m22_;
    static void BulkTranspose(float* dest, const float* src, unsigned count)
    {
        for (unsigned i = 0; i < count; ++i)
        {
            dest[0] = src[0];
            dest[1] = src[3];
            dest[2] = src[6];
            dest[3] = src[1];
            dest[4] = src[4];
            dest[5] = src[7];
            dest[6] = src[2];
            dest[7] = src[5];
            dest[8] = src[8];
            dest += 9;
            src += 9;
        }
    }
    static const Matrix3 ZERO;
    static const Matrix3 IDENTITY;
};
inline Matrix3 operator *(float lhs, const Matrix3& rhs) { return rhs * lhs; }
}
namespace Urho3D
{
class Quaternion
{
public:
    Quaternion()
    {
        _mm_storeu_ps(&w_, _mm_set_ps(0.f, 0.f, 0.f, 1.f));
    }
    Quaternion(const Quaternion& quat)
    {
        _mm_storeu_ps(&w_, _mm_loadu_ps(&quat.w_));
    }
    Quaternion(float w, float x, float y, float z)
    {
        _mm_storeu_ps(&w_, _mm_set_ps(z, y, x, w));
    }
    explicit Quaternion(const float* data)
    {
        _mm_storeu_ps(&w_, _mm_loadu_ps(data));
    }
    Quaternion(float angle, const Vector3& axis)
    {
        FromAngleAxis(angle, axis);
    }
    explicit Quaternion(float angle)
    {
        FromAngleAxis(angle, Vector3::FORWARD);
    }
    Quaternion(float x, float y, float z)
    {
        FromEulerAngles(x, y, z);
    }
    Quaternion(const Vector3& start, const Vector3& end)
    {
        FromRotationTo(start, end);
    }
    Quaternion(const Vector3& xAxis, const Vector3& yAxis, const Vector3& zAxis)
    {
        FromAxes(xAxis, yAxis, zAxis);
    }
    explicit Quaternion(const Matrix3& matrix)
    {
        FromRotationMatrix(matrix);
    }
    explicit Quaternion(__m128 wxyz)
    {
        _mm_storeu_ps(&w_, wxyz);
    }
    Quaternion& operator =(const Quaternion& rhs)
    {
        _mm_storeu_ps(&w_, _mm_loadu_ps(&rhs.w_));
        return *this;
    }
    Quaternion& operator +=(const Quaternion& rhs)
    {
        _mm_storeu_ps(&w_, _mm_add_ps(_mm_loadu_ps(&w_), _mm_loadu_ps(&rhs.w_)));
        return *this;
    }
    Quaternion& operator *=(float rhs)
    {
        _mm_storeu_ps(&w_, _mm_mul_ps(_mm_loadu_ps(&w_), _mm_set1_ps(rhs)));
        return *this;
    }
    bool operator ==(const Quaternion& rhs) const
    {
        __m128 c = _mm_cmpeq_ps(_mm_loadu_ps(&w_), _mm_loadu_ps(&rhs.w_));
        c = _mm_and_ps(c, _mm_movehl_ps(c, c));
        c = _mm_and_ps(c, ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(c), (__v4sf)(__m128)(c), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1))))));
        return _mm_cvtsi128_si32(_mm_castps_si128(c)) == -1;
    }
    bool operator !=(const Quaternion& rhs) const { return !(*this == rhs); }
    Quaternion operator *(float rhs) const
    {
        return Quaternion(_mm_mul_ps(_mm_loadu_ps(&w_), _mm_set1_ps(rhs)));
    }
    Quaternion operator -() const
    {
        return Quaternion(_mm_xor_ps(_mm_loadu_ps(&w_), _mm_castsi128_ps(_mm_set1_epi32((int)0x80000000UL))));
    }
    Quaternion operator +(const Quaternion& rhs) const
    {
        return Quaternion(_mm_add_ps(_mm_loadu_ps(&w_), _mm_loadu_ps(&rhs.w_)));
    }
    Quaternion operator -(const Quaternion& rhs) const
    {
        return Quaternion(_mm_sub_ps(_mm_loadu_ps(&w_), _mm_loadu_ps(&rhs.w_)));
    }
    Quaternion operator *(const Quaternion& rhs) const
    {
        __m128 q1 = _mm_loadu_ps(&w_);
        __m128 q2 = _mm_loadu_ps(&rhs.w_);
        q2 = ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(q2), (__v4sf)(__m128)(q2), (int)((((0) << 6) | ((3) << 4) | ((2) << 2) | (1)))));
        const __m128 signy = _mm_castsi128_ps(_mm_set_epi32((int)0x80000000UL, (int)0x80000000UL, 0, 0));
        const __m128 signx = ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(signy), (__v4sf)(__m128)(signy), (int)((((2) << 6) | ((0) << 4) | ((2) << 2) | (0)))));
        const __m128 signz = ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(signy), (__v4sf)(__m128)(signy), (int)((((3) << 6) | ((0) << 4) | ((0) << 2) | (3)))));
        __m128 out = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(q1), (__v4sf)(__m128)(q1), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1))))), ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(q2), (__v4sf)(__m128)(q2), (int)((((0) << 6) | ((1) << 4) | ((2) << 2) | (3))))));
        out = _mm_add_ps(_mm_mul_ps(_mm_xor_ps(signy, ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(q1), (__v4sf)(__m128)(q1), (int)((((2) << 6) | ((2) << 4) | ((2) << 2) | (2)))))), ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(q2), (__v4sf)(__m128)(q2), (int)((((1) << 6) | ((0) << 4) | ((3) << 2) | (2)))))), _mm_xor_ps(signx, out));
        out = _mm_add_ps(_mm_mul_ps(_mm_xor_ps(signz, ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(q1), (__v4sf)(__m128)(q1), (int)((((3) << 6) | ((3) << 4) | ((3) << 2) | (3)))))), ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(q2), (__v4sf)(__m128)(q2), (int)((((2) << 6) | ((3) << 4) | ((0) << 2) | (1)))))), out);
        out = _mm_add_ps(_mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(q1), (__v4sf)(__m128)(q1), (int)((((0) << 6) | ((0) << 4) | ((0) << 2) | (0))))), q2), out);
        return Quaternion(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(out), (__v4sf)(__m128)(out), (int)((((2) << 6) | ((1) << 4) | ((0) << 2) | (3))))));
    }
    Vector3 operator *(const Vector3& rhs) const
    {
        __m128 q = _mm_loadu_ps(&w_);
        q = ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(q), (__v4sf)(__m128)(q), (int)((((0) << 6) | ((3) << 4) | ((2) << 2) | (1)))));
        __m128 v = _mm_set_ps(0.f, rhs.z_, rhs.y_, rhs.x_);
        const __m128 W = ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(q), (__v4sf)(__m128)(q), (int)((((3) << 6) | ((3) << 4) | ((3) << 2) | (3)))));
        const __m128 a_yzx = ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(q), (__v4sf)(__m128)(q), (int)((((3) << 6) | ((0) << 4) | ((2) << 2) | (1)))));
        __m128 x = _mm_mul_ps(q, ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(v), (__v4sf)(__m128)(v), (int)((((3) << 6) | ((0) << 4) | ((2) << 2) | (1))))));
        __m128 qxv = _mm_sub_ps(x, _mm_mul_ps(a_yzx, v));
        __m128 Wv = _mm_mul_ps(W, v);
        __m128 s = _mm_add_ps(qxv, ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(Wv), (__v4sf)(__m128)(Wv), (int)((((3) << 6) | ((1) << 4) | ((0) << 2) | (2))))));
        __m128 qs = _mm_mul_ps(q, s);
        __m128 y = ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(qs), (__v4sf)(__m128)(qs), (int)((((3) << 6) | ((1) << 4) | ((0) << 2) | (2)))));
        s = _mm_sub_ps(_mm_mul_ps(a_yzx, s), y);
        s = _mm_add_ps(s, s);
        s = _mm_add_ps(s, v);
        return Vector3(
            _mm_cvtss_f32(s),
            _mm_cvtss_f32(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(s), (__v4sf)(__m128)(s), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1)))))),
            _mm_cvtss_f32(_mm_movehl_ps(s, s)));
    }
    void FromAngleAxis(float angle, const Vector3& axis);
    void FromEulerAngles(float x, float y, float z);
    void FromRotationTo(const Vector3& start, const Vector3& end);
    void FromAxes(const Vector3& xAxis, const Vector3& yAxis, const Vector3& zAxis);
    void FromRotationMatrix(const Matrix3& matrix);
    bool FromLookRotation(const Vector3& direction, const Vector3& up = Vector3::UP);
    void Normalize()
    {
        __m128 q = _mm_loadu_ps(&w_);
        __m128 n = _mm_mul_ps(q, q);
        n = _mm_add_ps(n, ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(n), (__v4sf)(__m128)(n), (int)((((2) << 6) | ((3) << 4) | ((0) << 2) | (1))))));
        n = _mm_add_ps(n, ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(n), (__v4sf)(__m128)(n), (int)((((0) << 6) | ((1) << 4) | ((2) << 2) | (3))))));
        __m128 e = _mm_rsqrt_ps(n);
        __m128 e3 = _mm_mul_ps(_mm_mul_ps(e, e), e);
        __m128 half = _mm_set1_ps(0.5f);
        n = _mm_add_ps(e, _mm_mul_ps(half, _mm_sub_ps(e, _mm_mul_ps(n, e3))));
        _mm_storeu_ps(&w_, _mm_mul_ps(q, n));
    }
    Quaternion Normalized() const
    {
        __m128 q = _mm_loadu_ps(&w_);
        __m128 n = _mm_mul_ps(q, q);
        n = _mm_add_ps(n, ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(n), (__v4sf)(__m128)(n), (int)((((2) << 6) | ((3) << 4) | ((0) << 2) | (1))))));
        n = _mm_add_ps(n, ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(n), (__v4sf)(__m128)(n), (int)((((0) << 6) | ((1) << 4) | ((2) << 2) | (3))))));
        __m128 e = _mm_rsqrt_ps(n);
        __m128 e3 = _mm_mul_ps(_mm_mul_ps(e, e), e);
        __m128 half = _mm_set1_ps(0.5f);
        n = _mm_add_ps(e, _mm_mul_ps(half, _mm_sub_ps(e, _mm_mul_ps(n, e3))));
        return Quaternion(_mm_mul_ps(q, n));
    }
    Quaternion Inverse() const
    {
        __m128 q = _mm_loadu_ps(&w_);
        __m128 n = _mm_mul_ps(q, q);
        n = _mm_add_ps(n, ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(n), (__v4sf)(__m128)(n), (int)((((2) << 6) | ((3) << 4) | ((0) << 2) | (1))))));
        n = _mm_add_ps(n, ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(n), (__v4sf)(__m128)(n), (int)((((0) << 6) | ((1) << 4) | ((2) << 2) | (3))))));
        return Quaternion(_mm_div_ps(_mm_xor_ps(q, _mm_castsi128_ps(_mm_set_epi32((int)0x80000000UL, (int)0x80000000UL, (int)0x80000000UL, 0))), n));
    }
    float LengthSquared() const
    {
        __m128 q = _mm_loadu_ps(&w_);
        __m128 n = _mm_mul_ps(q, q);
        n = _mm_add_ps(n, ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(n), (__v4sf)(__m128)(n), (int)((((2) << 6) | ((3) << 4) | ((0) << 2) | (1))))));
        n = _mm_add_ps(n, ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(n), (__v4sf)(__m128)(n), (int)((((0) << 6) | ((1) << 4) | ((2) << 2) | (3))))));
        return _mm_cvtss_f32(n);
    }
    float DotProduct(const Quaternion& rhs) const
    {
        __m128 q1 = _mm_loadu_ps(&w_);
        __m128 q2 = _mm_loadu_ps(&rhs.w_);
        __m128 n = _mm_mul_ps(q1, q2);
        n = _mm_add_ps(n, ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(n), (__v4sf)(__m128)(n), (int)((((2) << 6) | ((3) << 4) | ((0) << 2) | (1))))));
        n = _mm_add_ps(n, ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(n), (__v4sf)(__m128)(n), (int)((((0) << 6) | ((1) << 4) | ((2) << 2) | (3))))));
        return _mm_cvtss_f32(n);
    }
    bool Equals(const Quaternion& rhs) const
    {
        return Urho3D::Equals(w_, rhs.w_) && Urho3D::Equals(x_, rhs.x_) && Urho3D::Equals(y_, rhs.y_) && Urho3D::Equals(z_, rhs.z_);
    }
    bool IsNaN() const { return Urho3D::IsNaN(w_) || Urho3D::IsNaN(x_) || Urho3D::IsNaN(y_) || Urho3D::IsNaN(z_); }
    Quaternion Conjugate() const
    {
        __m128 q = _mm_loadu_ps(&w_);
        return Quaternion(_mm_xor_ps(q, _mm_castsi128_ps(_mm_set_epi32((int)0x80000000UL, (int)0x80000000UL, (int)0x80000000UL, 0))));
    }
    Vector3 EulerAngles() const;
    float YawAngle() const;
    float PitchAngle() const;
    float RollAngle() const;
    Vector3 Axis() const;
    float Angle() const;
    Matrix3 RotationMatrix() const;
    Quaternion Slerp(const Quaternion& rhs, float t) const;
    Quaternion Nlerp(const Quaternion& rhs, float t, bool shortestPath = false) const;
    const float* Data() const { return &w_; }
    String ToString() const;
    float w_;
    float x_;
    float y_;
    float z_;
    static const Quaternion IDENTITY;
};
}
namespace Urho3D
{
class Matrix3x4;
class Matrix4
{
public:
    Matrix4()
    {
        _mm_storeu_ps(&m00_, _mm_set_ps(0.f, 0.f, 0.f, 1.f));
        _mm_storeu_ps(&m10_, _mm_set_ps(0.f, 0.f, 1.f, 0.f));
        _mm_storeu_ps(&m20_, _mm_set_ps(0.f, 1.f, 0.f, 0.f));
        _mm_storeu_ps(&m30_, _mm_set_ps(1.f, 0.f, 0.f, 0.f));
    }
    Matrix4(const Matrix4& matrix)
    {
        _mm_storeu_ps(&m00_, _mm_loadu_ps(&matrix.m00_));
        _mm_storeu_ps(&m10_, _mm_loadu_ps(&matrix.m10_));
        _mm_storeu_ps(&m20_, _mm_loadu_ps(&matrix.m20_));
        _mm_storeu_ps(&m30_, _mm_loadu_ps(&matrix.m30_));
    }
    Matrix4(const Matrix3& matrix) :
        m00_(matrix.m00_),
        m01_(matrix.m01_),
        m02_(matrix.m02_),
        m03_(0.0f),
        m10_(matrix.m10_),
        m11_(matrix.m11_),
        m12_(matrix.m12_),
        m13_(0.0f),
        m20_(matrix.m20_),
        m21_(matrix.m21_),
        m22_(matrix.m22_),
        m23_(0.0f),
        m30_(0.0f),
        m31_(0.0f),
        m32_(0.0f),
        m33_(1.0f)
    {
    }
    Matrix4(float v00, float v01, float v02, float v03,
            float v10, float v11, float v12, float v13,
            float v20, float v21, float v22, float v23,
            float v30, float v31, float v32, float v33) :
        m00_(v00),
        m01_(v01),
        m02_(v02),
        m03_(v03),
        m10_(v10),
        m11_(v11),
        m12_(v12),
        m13_(v13),
        m20_(v20),
        m21_(v21),
        m22_(v22),
        m23_(v23),
        m30_(v30),
        m31_(v31),
        m32_(v32),
        m33_(v33)
    {
    }
    explicit Matrix4(const float* data)
    {
        _mm_storeu_ps(&m00_, _mm_loadu_ps(data));
        _mm_storeu_ps(&m10_, _mm_loadu_ps(data + 4));
        _mm_storeu_ps(&m20_, _mm_loadu_ps(data + 8));
        _mm_storeu_ps(&m30_, _mm_loadu_ps(data + 12));
    }
    Matrix4& operator =(const Matrix4& rhs)
    {
        _mm_storeu_ps(&m00_, _mm_loadu_ps(&rhs.m00_));
        _mm_storeu_ps(&m10_, _mm_loadu_ps(&rhs.m10_));
        _mm_storeu_ps(&m20_, _mm_loadu_ps(&rhs.m20_));
        _mm_storeu_ps(&m30_, _mm_loadu_ps(&rhs.m30_));
        return *this;
    }
    Matrix4& operator =(const Matrix3& rhs)
    {
        m00_ = rhs.m00_;
        m01_ = rhs.m01_;
        m02_ = rhs.m02_;
        m03_ = 0.0f;
        m10_ = rhs.m10_;
        m11_ = rhs.m11_;
        m12_ = rhs.m12_;
        m13_ = 0.0f;
        m20_ = rhs.m20_;
        m21_ = rhs.m21_;
        m22_ = rhs.m22_;
        m23_ = 0.0f;
        m30_ = 0.0f;
        m31_ = 0.0f;
        m32_ = 0.0f;
        m33_ = 1.0f;
        return *this;
    }
    bool operator ==(const Matrix4& rhs) const
    {
        __m128 c0 = _mm_cmpeq_ps(_mm_loadu_ps(&m00_), _mm_loadu_ps(&rhs.m00_));
        __m128 c1 = _mm_cmpeq_ps(_mm_loadu_ps(&m10_), _mm_loadu_ps(&rhs.m10_));
        c0 = _mm_and_ps(c0, c1);
        __m128 c2 = _mm_cmpeq_ps(_mm_loadu_ps(&m20_), _mm_loadu_ps(&rhs.m20_));
        __m128 c3 = _mm_cmpeq_ps(_mm_loadu_ps(&m30_), _mm_loadu_ps(&rhs.m30_));
        c2 = _mm_and_ps(c2, c3);
        c0 = _mm_and_ps(c0, c2);
        __m128 hi = _mm_movehl_ps(c0, c0);
        c0 = _mm_and_ps(c0, hi);
        hi = ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(c0), (__v4sf)(__m128)(c0), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1)))));
        c0 = _mm_and_ps(c0, hi);
        return _mm_cvtsi128_si32(_mm_castps_si128(c0)) == -1;
    }
    bool operator !=(const Matrix4& rhs) const { return !(*this == rhs); }
    Vector3 operator *(const Vector3& rhs) const
    {
        __m128 vec = _mm_set_ps(1.f, rhs.z_, rhs.y_, rhs.x_);
        __m128 r0 = _mm_mul_ps(_mm_loadu_ps(&m00_), vec);
        __m128 r1 = _mm_mul_ps(_mm_loadu_ps(&m10_), vec);
        __m128 t0 = _mm_unpacklo_ps(r0, r1);
        __m128 t1 = _mm_unpackhi_ps(r0, r1);
        t0 = _mm_add_ps(t0, t1);
        __m128 r2 = _mm_mul_ps(_mm_loadu_ps(&m20_), vec);
        __m128 r3 = _mm_mul_ps(_mm_loadu_ps(&m30_), vec);
        __m128 t2 = _mm_unpacklo_ps(r2, r3);
        __m128 t3 = _mm_unpackhi_ps(r2, r3);
        t2 = _mm_add_ps(t2, t3);
        vec = _mm_add_ps(_mm_movelh_ps(t0, t2), _mm_movehl_ps(t2, t0));
        vec = _mm_div_ps(vec, ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(vec), (__v4sf)(__m128)(vec), (int)((((3) << 6) | ((3) << 4) | ((3) << 2) | (3))))));
        return Vector3(
            _mm_cvtss_f32(vec),
            _mm_cvtss_f32(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(vec), (__v4sf)(__m128)(vec), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1)))))),
            _mm_cvtss_f32(_mm_movehl_ps(vec, vec)));
    }
    Vector4 operator *(const Vector4& rhs) const
    {
        __m128 vec = _mm_loadu_ps(&rhs.x_);
        __m128 r0 = _mm_mul_ps(_mm_loadu_ps(&m00_), vec);
        __m128 r1 = _mm_mul_ps(_mm_loadu_ps(&m10_), vec);
        __m128 t0 = _mm_unpacklo_ps(r0, r1);
        __m128 t1 = _mm_unpackhi_ps(r0, r1);
        t0 = _mm_add_ps(t0, t1);
        __m128 r2 = _mm_mul_ps(_mm_loadu_ps(&m20_), vec);
        __m128 r3 = _mm_mul_ps(_mm_loadu_ps(&m30_), vec);
        __m128 t2 = _mm_unpacklo_ps(r2, r3);
        __m128 t3 = _mm_unpackhi_ps(r2, r3);
        t2 = _mm_add_ps(t2, t3);
        vec = _mm_add_ps(_mm_movelh_ps(t0, t2), _mm_movehl_ps(t2, t0));
        Vector4 ret;
        _mm_storeu_ps(&ret.x_, vec);
        return ret;
    }
    Matrix4 operator +(const Matrix4& rhs) const
    {
        Matrix4 ret;
        _mm_storeu_ps(&ret.m00_, _mm_add_ps(_mm_loadu_ps(&m00_), _mm_loadu_ps(&rhs.m00_)));
        _mm_storeu_ps(&ret.m10_, _mm_add_ps(_mm_loadu_ps(&m10_), _mm_loadu_ps(&rhs.m10_)));
        _mm_storeu_ps(&ret.m20_, _mm_add_ps(_mm_loadu_ps(&m20_), _mm_loadu_ps(&rhs.m20_)));
        _mm_storeu_ps(&ret.m30_, _mm_add_ps(_mm_loadu_ps(&m30_), _mm_loadu_ps(&rhs.m30_)));
        return ret;
    }
    Matrix4 operator -(const Matrix4& rhs) const
    {
        Matrix4 ret;
        _mm_storeu_ps(&ret.m00_, _mm_sub_ps(_mm_loadu_ps(&m00_), _mm_loadu_ps(&rhs.m00_)));
        _mm_storeu_ps(&ret.m10_, _mm_sub_ps(_mm_loadu_ps(&m10_), _mm_loadu_ps(&rhs.m10_)));
        _mm_storeu_ps(&ret.m20_, _mm_sub_ps(_mm_loadu_ps(&m20_), _mm_loadu_ps(&rhs.m20_)));
        _mm_storeu_ps(&ret.m30_, _mm_sub_ps(_mm_loadu_ps(&m30_), _mm_loadu_ps(&rhs.m30_)));
        return ret;
    }
    Matrix4 operator *(float rhs) const
    {
        Matrix4 ret;
        const __m128 mul = _mm_set1_ps(rhs);
        _mm_storeu_ps(&ret.m00_, _mm_mul_ps(_mm_loadu_ps(&m00_), mul));
        _mm_storeu_ps(&ret.m10_, _mm_mul_ps(_mm_loadu_ps(&m10_), mul));
        _mm_storeu_ps(&ret.m20_, _mm_mul_ps(_mm_loadu_ps(&m20_), mul));
        _mm_storeu_ps(&ret.m30_, _mm_mul_ps(_mm_loadu_ps(&m30_), mul));
        return ret;
    }
    Matrix4 operator *(const Matrix4& rhs) const
    {
        Matrix4 out;
        __m128 r0 = _mm_loadu_ps(&rhs.m00_);
        __m128 r1 = _mm_loadu_ps(&rhs.m10_);
        __m128 r2 = _mm_loadu_ps(&rhs.m20_);
        __m128 r3 = _mm_loadu_ps(&rhs.m30_);
        __m128 l = _mm_loadu_ps(&m00_);
        __m128 t0 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((0) << 6) | ((0) << 4) | ((0) << 2) | (0))))), r0);
        __m128 t1 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1))))), r1);
        __m128 t2 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((2) << 6) | ((2) << 4) | ((2) << 2) | (2))))), r2);
        __m128 t3 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((3) << 6) | ((3) << 4) | ((3) << 2) | (3))))), r3);
        _mm_storeu_ps(&out.m00_, _mm_add_ps(_mm_add_ps(t0, t1), _mm_add_ps(t2, t3)));
        l = _mm_loadu_ps(&m10_);
        t0 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((0) << 6) | ((0) << 4) | ((0) << 2) | (0))))), r0);
        t1 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1))))), r1);
        t2 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((2) << 6) | ((2) << 4) | ((2) << 2) | (2))))), r2);
        t3 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((3) << 6) | ((3) << 4) | ((3) << 2) | (3))))), r3);
        _mm_storeu_ps(&out.m10_, _mm_add_ps(_mm_add_ps(t0, t1), _mm_add_ps(t2, t3)));
        l = _mm_loadu_ps(&m20_);
        t0 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((0) << 6) | ((0) << 4) | ((0) << 2) | (0))))), r0);
        t1 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1))))), r1);
        t2 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((2) << 6) | ((2) << 4) | ((2) << 2) | (2))))), r2);
        t3 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((3) << 6) | ((3) << 4) | ((3) << 2) | (3))))), r3);
        _mm_storeu_ps(&out.m20_, _mm_add_ps(_mm_add_ps(t0, t1), _mm_add_ps(t2, t3)));
        l = _mm_loadu_ps(&m30_);
        t0 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((0) << 6) | ((0) << 4) | ((0) << 2) | (0))))), r0);
        t1 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1))))), r1);
        t2 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((2) << 6) | ((2) << 4) | ((2) << 2) | (2))))), r2);
        t3 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((3) << 6) | ((3) << 4) | ((3) << 2) | (3))))), r3);
        _mm_storeu_ps(&out.m30_, _mm_add_ps(_mm_add_ps(t0, t1), _mm_add_ps(t2, t3)));
        return out;
    }
    Matrix4 operator *(const Matrix3x4& rhs) const;
    void SetTranslation(const Vector3& translation)
    {
        m03_ = translation.x_;
        m13_ = translation.y_;
        m23_ = translation.z_;
    }
    void SetRotation(const Matrix3& rotation)
    {
        m00_ = rotation.m00_;
        m01_ = rotation.m01_;
        m02_ = rotation.m02_;
        m10_ = rotation.m10_;
        m11_ = rotation.m11_;
        m12_ = rotation.m12_;
        m20_ = rotation.m20_;
        m21_ = rotation.m21_;
        m22_ = rotation.m22_;
    }
    void SetScale(const Vector3& scale)
    {
        m00_ = scale.x_;
        m11_ = scale.y_;
        m22_ = scale.z_;
    }
    void SetScale(float scale)
    {
        m00_ = scale;
        m11_ = scale;
        m22_ = scale;
    }
    Matrix3 ToMatrix3() const
    {
        return Matrix3(
            m00_,
            m01_,
            m02_,
            m10_,
            m11_,
            m12_,
            m20_,
            m21_,
            m22_
        );
    }
    Matrix3 RotationMatrix() const
    {
        Vector3 invScale(
            1.0f / sqrtf(m00_ * m00_ + m10_ * m10_ + m20_ * m20_),
            1.0f / sqrtf(m01_ * m01_ + m11_ * m11_ + m21_ * m21_),
            1.0f / sqrtf(m02_ * m02_ + m12_ * m12_ + m22_ * m22_)
        );
        return ToMatrix3().Scaled(invScale);
    }
    Vector3 Translation() const
    {
        return Vector3(
            m03_,
            m13_,
            m23_
        );
    }
    Quaternion Rotation() const { return Quaternion(RotationMatrix()); }
    Vector3 Scale() const
    {
        return Vector3(
            sqrtf(m00_ * m00_ + m10_ * m10_ + m20_ * m20_),
            sqrtf(m01_ * m01_ + m11_ * m11_ + m21_ * m21_),
            sqrtf(m02_ * m02_ + m12_ * m12_ + m22_ * m22_)
        );
    }
    Vector3 SignedScale(const Matrix3& rotation) const
    {
        return Vector3(
            rotation.m00_ * m00_ + rotation.m10_ * m10_ + rotation.m20_ * m20_,
            rotation.m01_ * m01_ + rotation.m11_ * m11_ + rotation.m21_ * m21_,
            rotation.m02_ * m02_ + rotation.m12_ * m12_ + rotation.m22_ * m22_
        );
    }
    Matrix4 Transpose() const
    {
        __m128 m0 = _mm_loadu_ps(&m00_);
        __m128 m1 = _mm_loadu_ps(&m10_);
        __m128 m2 = _mm_loadu_ps(&m20_);
        __m128 m3 = _mm_loadu_ps(&m30_);
        do { __v4sf __r0 = (m0), __r1 = (m1), __r2 = (m2), __r3 = (m3); __v4sf __t0 = __builtin_ia32_unpcklps (__r0, __r1); __v4sf __t1 = __builtin_ia32_unpcklps (__r2, __r3); __v4sf __t2 = __builtin_ia32_unpckhps (__r0, __r1); __v4sf __t3 = __builtin_ia32_unpckhps (__r2, __r3); (m0) = __builtin_ia32_movlhps (__t0, __t1); (m1) = __builtin_ia32_movhlps (__t1, __t0); (m2) = __builtin_ia32_movlhps (__t2, __t3); (m3) = __builtin_ia32_movhlps (__t3, __t2); } while (0);
        Matrix4 out;
        _mm_storeu_ps(&out.m00_, m0);
        _mm_storeu_ps(&out.m10_, m1);
        _mm_storeu_ps(&out.m20_, m2);
        _mm_storeu_ps(&out.m30_, m3);
        return out;
    }
    bool Equals(const Matrix4& rhs) const
    {
        const float* leftData = Data();
        const float* rightData = rhs.Data();
        for (unsigned i = 0; i < 16; ++i)
        {
            if (!Urho3D::Equals(leftData[i], rightData[i]))
                return false;
        }
        return true;
    }
    void Decompose(Vector3& translation, Quaternion& rotation, Vector3& scale) const;
    Matrix4 Inverse() const;
    const float* Data() const { return &m00_; }
    float Element(unsigned i, unsigned j) const { return Data()[i * 4 + j]; }
    Vector4 Row(unsigned i) const { return Vector4(Element(i, 0), Element(i, 1), Element(i, 2), Element(i, 3)); }
    Vector4 Column(unsigned j) const { return Vector4(Element(0, j), Element(1, j), Element(2, j), Element(3, j)); }
    String ToString() const;
    float m00_;
    float m01_;
    float m02_;
    float m03_;
    float m10_;
    float m11_;
    float m12_;
    float m13_;
    float m20_;
    float m21_;
    float m22_;
    float m23_;
    float m30_;
    float m31_;
    float m32_;
    float m33_;
    static void BulkTranspose(float* dest, const float* src, unsigned count)
    {
        for (unsigned i = 0; i < count; ++i)
        {
            __m128 m0 = _mm_loadu_ps(src);
            __m128 m1 = _mm_loadu_ps(src + 4);
            __m128 m2 = _mm_loadu_ps(src + 8);
            __m128 m3 = _mm_loadu_ps(src + 12);
            do { __v4sf __r0 = (m0), __r1 = (m1), __r2 = (m2), __r3 = (m3); __v4sf __t0 = __builtin_ia32_unpcklps (__r0, __r1); __v4sf __t1 = __builtin_ia32_unpcklps (__r2, __r3); __v4sf __t2 = __builtin_ia32_unpckhps (__r0, __r1); __v4sf __t3 = __builtin_ia32_unpckhps (__r2, __r3); (m0) = __builtin_ia32_movlhps (__t0, __t1); (m1) = __builtin_ia32_movhlps (__t1, __t0); (m2) = __builtin_ia32_movlhps (__t2, __t3); (m3) = __builtin_ia32_movhlps (__t3, __t2); } while (0);
            _mm_storeu_ps(dest, m0);
            _mm_storeu_ps(dest + 4, m1);
            _mm_storeu_ps(dest + 8, m2);
            _mm_storeu_ps(dest + 12, m3);
            dest += 16;
            src += 16;
        }
    }
    static const Matrix4 ZERO;
    static const Matrix4 IDENTITY;
};
inline Matrix4 operator *(float lhs, const Matrix4& rhs) { return rhs * lhs; }
}
namespace Urho3D
{
class Matrix3x4
{
public:
    Matrix3x4()
    {
        _mm_storeu_ps(&m00_, _mm_set_ps(0.f, 0.f, 0.f, 1.f));
        _mm_storeu_ps(&m10_, _mm_set_ps(0.f, 0.f, 1.f, 0.f));
        _mm_storeu_ps(&m20_, _mm_set_ps(0.f, 1.f, 0.f, 0.f));
    }
    Matrix3x4(const Matrix3x4& matrix)
    {
        _mm_storeu_ps(&m00_, _mm_loadu_ps(&matrix.m00_));
        _mm_storeu_ps(&m10_, _mm_loadu_ps(&matrix.m10_));
        _mm_storeu_ps(&m20_, _mm_loadu_ps(&matrix.m20_));
    }
    Matrix3x4(const Matrix3& matrix) :
        m00_(matrix.m00_),
        m01_(matrix.m01_),
        m02_(matrix.m02_),
        m03_(0.0f),
        m10_(matrix.m10_),
        m11_(matrix.m11_),
        m12_(matrix.m12_),
        m13_(0.0f),
        m20_(matrix.m20_),
        m21_(matrix.m21_),
        m22_(matrix.m22_),
        m23_(0.0f)
    {
    }
    Matrix3x4(const Matrix4& matrix)
    {
        _mm_storeu_ps(&m00_, _mm_loadu_ps(&matrix.m00_));
        _mm_storeu_ps(&m10_, _mm_loadu_ps(&matrix.m10_));
        _mm_storeu_ps(&m20_, _mm_loadu_ps(&matrix.m20_));
    }
    Matrix3x4(float v00, float v01, float v02, float v03,
              float v10, float v11, float v12, float v13,
              float v20, float v21, float v22, float v23) :
        m00_(v00),
        m01_(v01),
        m02_(v02),
        m03_(v03),
        m10_(v10),
        m11_(v11),
        m12_(v12),
        m13_(v13),
        m20_(v20),
        m21_(v21),
        m22_(v22),
        m23_(v23)
    {
    }
    explicit Matrix3x4(const float* data)
    {
        _mm_storeu_ps(&m00_, _mm_loadu_ps(data));
        _mm_storeu_ps(&m10_, _mm_loadu_ps(data + 4));
        _mm_storeu_ps(&m20_, _mm_loadu_ps(data + 8));
    }
    Matrix3x4(const Vector3& translation, const Quaternion& rotation, float scale)
    {
        __m128 t = _mm_set_ps(1.f, translation.z_, translation.y_, translation.x_);
        __m128 q = _mm_loadu_ps(&rotation.w_);
        __m128 s = _mm_set_ps(1.f, scale, scale, scale);
        SetFromTRS(t, q, s);
    }
    Matrix3x4(const Vector3& translation, const Quaternion& rotation, const Vector3& scale)
    {
        __m128 t = _mm_set_ps(1.f, translation.z_, translation.y_, translation.x_);
        __m128 q = _mm_loadu_ps(&rotation.w_);
        __m128 s = _mm_set_ps(1.f, scale.z_, scale.y_, scale.x_);
        SetFromTRS(t, q, s);
    }
    Matrix3x4& operator =(const Matrix3x4& rhs)
    {
        _mm_storeu_ps(&m00_, _mm_loadu_ps(&rhs.m00_));
        _mm_storeu_ps(&m10_, _mm_loadu_ps(&rhs.m10_));
        _mm_storeu_ps(&m20_, _mm_loadu_ps(&rhs.m20_));
        return *this;
    }
    Matrix3x4& operator =(const Matrix3& rhs)
    {
        m00_ = rhs.m00_;
        m01_ = rhs.m01_;
        m02_ = rhs.m02_;
        m03_ = 0.0;
        m10_ = rhs.m10_;
        m11_ = rhs.m11_;
        m12_ = rhs.m12_;
        m13_ = 0.0;
        m20_ = rhs.m20_;
        m21_ = rhs.m21_;
        m22_ = rhs.m22_;
        m23_ = 0.0;
        return *this;
    }
    Matrix3x4& operator =(const Matrix4& rhs)
    {
        _mm_storeu_ps(&m00_, _mm_loadu_ps(&rhs.m00_));
        _mm_storeu_ps(&m10_, _mm_loadu_ps(&rhs.m10_));
        _mm_storeu_ps(&m20_, _mm_loadu_ps(&rhs.m20_));
        return *this;
    }
    bool operator ==(const Matrix3x4& rhs) const
    {
        __m128 c0 = _mm_cmpeq_ps(_mm_loadu_ps(&m00_), _mm_loadu_ps(&rhs.m00_));
        __m128 c1 = _mm_cmpeq_ps(_mm_loadu_ps(&m10_), _mm_loadu_ps(&rhs.m10_));
        c0 = _mm_and_ps(c0, c1);
        __m128 c2 = _mm_cmpeq_ps(_mm_loadu_ps(&m20_), _mm_loadu_ps(&rhs.m20_));
        c0 = _mm_and_ps(c0, c2);
        __m128 hi = _mm_movehl_ps(c0, c0);
        c0 = _mm_and_ps(c0, hi);
        hi = ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(c0), (__v4sf)(__m128)(c0), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1)))));
        c0 = _mm_and_ps(c0, hi);
        return _mm_cvtsi128_si32(_mm_castps_si128(c0)) == -1;
    }
    bool operator !=(const Matrix3x4& rhs) const { return !(*this == rhs); }
    Vector3 operator *(const Vector3& rhs) const
    {
        __m128 vec = _mm_set_ps(1.f, rhs.z_, rhs.y_, rhs.x_);
        __m128 r0 = _mm_mul_ps(_mm_loadu_ps(&m00_), vec);
        __m128 r1 = _mm_mul_ps(_mm_loadu_ps(&m10_), vec);
        __m128 t0 = _mm_unpacklo_ps(r0, r1);
        __m128 t1 = _mm_unpackhi_ps(r0, r1);
        t0 = _mm_add_ps(t0, t1);
        __m128 r2 = _mm_mul_ps(_mm_loadu_ps(&m20_), vec);
        __m128 r3 = _mm_setzero_ps();
        __m128 t2 = _mm_unpacklo_ps(r2, r3);
        __m128 t3 = _mm_unpackhi_ps(r2, r3);
        t2 = _mm_add_ps(t2, t3);
        vec = _mm_add_ps(_mm_movelh_ps(t0, t2), _mm_movehl_ps(t2, t0));
        return Vector3(
            _mm_cvtss_f32(vec),
            _mm_cvtss_f32(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(vec), (__v4sf)(__m128)(vec), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1)))))),
            _mm_cvtss_f32(_mm_movehl_ps(vec, vec)));
    }
    Vector3 operator *(const Vector4& rhs) const
    {
        __m128 vec = _mm_loadu_ps(&rhs.x_);
        __m128 r0 = _mm_mul_ps(_mm_loadu_ps(&m00_), vec);
        __m128 r1 = _mm_mul_ps(_mm_loadu_ps(&m10_), vec);
        __m128 t0 = _mm_unpacklo_ps(r0, r1);
        __m128 t1 = _mm_unpackhi_ps(r0, r1);
        t0 = _mm_add_ps(t0, t1);
        __m128 r2 = _mm_mul_ps(_mm_loadu_ps(&m20_), vec);
        __m128 r3 = _mm_setzero_ps();
        __m128 t2 = _mm_unpacklo_ps(r2, r3);
        __m128 t3 = _mm_unpackhi_ps(r2, r3);
        t2 = _mm_add_ps(t2, t3);
        vec = _mm_add_ps(_mm_movelh_ps(t0, t2), _mm_movehl_ps(t2, t0));
        return Vector3(
            _mm_cvtss_f32(vec),
            _mm_cvtss_f32(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(vec), (__v4sf)(__m128)(vec), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1)))))),
            _mm_cvtss_f32(_mm_movehl_ps(vec, vec)));
    }
    Matrix3x4 operator +(const Matrix3x4& rhs) const
    {
        Matrix3x4 ret;
        _mm_storeu_ps(&ret.m00_, _mm_add_ps(_mm_loadu_ps(&m00_), _mm_loadu_ps(&rhs.m00_)));
        _mm_storeu_ps(&ret.m10_, _mm_add_ps(_mm_loadu_ps(&m10_), _mm_loadu_ps(&rhs.m10_)));
        _mm_storeu_ps(&ret.m20_, _mm_add_ps(_mm_loadu_ps(&m20_), _mm_loadu_ps(&rhs.m20_)));
        return ret;
    }
    Matrix3x4 operator -(const Matrix3x4& rhs) const
    {
        Matrix3x4 ret;
        _mm_storeu_ps(&ret.m00_, _mm_sub_ps(_mm_loadu_ps(&m00_), _mm_loadu_ps(&rhs.m00_)));
        _mm_storeu_ps(&ret.m10_, _mm_sub_ps(_mm_loadu_ps(&m10_), _mm_loadu_ps(&rhs.m10_)));
        _mm_storeu_ps(&ret.m20_, _mm_sub_ps(_mm_loadu_ps(&m20_), _mm_loadu_ps(&rhs.m20_)));
        return ret;
    }
    Matrix3x4 operator *(float rhs) const
    {
        Matrix3x4 ret;
        const __m128 mul = _mm_set1_ps(rhs);
        _mm_storeu_ps(&ret.m00_, _mm_mul_ps(_mm_loadu_ps(&m00_), mul));
        _mm_storeu_ps(&ret.m10_, _mm_mul_ps(_mm_loadu_ps(&m10_), mul));
        _mm_storeu_ps(&ret.m20_, _mm_mul_ps(_mm_loadu_ps(&m20_), mul));
        return ret;
    }
    Matrix3x4 operator *(const Matrix3x4& rhs) const
    {
        Matrix3x4 out;
        __m128 r0 = _mm_loadu_ps(&rhs.m00_);
        __m128 r1 = _mm_loadu_ps(&rhs.m10_);
        __m128 r2 = _mm_loadu_ps(&rhs.m20_);
        __m128 r3 = _mm_set_ps(1.f, 0.f, 0.f, 0.f);
        __m128 l = _mm_loadu_ps(&m00_);
        __m128 t0 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((0) << 6) | ((0) << 4) | ((0) << 2) | (0))))), r0);
        __m128 t1 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1))))), r1);
        __m128 t2 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((2) << 6) | ((2) << 4) | ((2) << 2) | (2))))), r2);
        __m128 t3 = _mm_mul_ps(l, r3);
        _mm_storeu_ps(&out.m00_, _mm_add_ps(_mm_add_ps(t0, t1), _mm_add_ps(t2, t3)));
        l = _mm_loadu_ps(&m10_);
        t0 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((0) << 6) | ((0) << 4) | ((0) << 2) | (0))))), r0);
        t1 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1))))), r1);
        t2 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((2) << 6) | ((2) << 4) | ((2) << 2) | (2))))), r2);
        t3 = _mm_mul_ps(l, r3);
        _mm_storeu_ps(&out.m10_, _mm_add_ps(_mm_add_ps(t0, t1), _mm_add_ps(t2, t3)));
        l = _mm_loadu_ps(&m20_);
        t0 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((0) << 6) | ((0) << 4) | ((0) << 2) | (0))))), r0);
        t1 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1))))), r1);
        t2 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((2) << 6) | ((2) << 4) | ((2) << 2) | (2))))), r2);
        t3 = _mm_mul_ps(l, r3);
        _mm_storeu_ps(&out.m20_, _mm_add_ps(_mm_add_ps(t0, t1), _mm_add_ps(t2, t3)));
        return out;
    }
    Matrix4 operator *(const Matrix4& rhs) const
    {
        Matrix4 out;
        __m128 r0 = _mm_loadu_ps(&rhs.m00_);
        __m128 r1 = _mm_loadu_ps(&rhs.m10_);
        __m128 r2 = _mm_loadu_ps(&rhs.m20_);
        __m128 r3 = _mm_loadu_ps(&rhs.m30_);
        __m128 l = _mm_loadu_ps(&m00_);
        __m128 t0 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((0) << 6) | ((0) << 4) | ((0) << 2) | (0))))), r0);
        __m128 t1 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1))))), r1);
        __m128 t2 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((2) << 6) | ((2) << 4) | ((2) << 2) | (2))))), r2);
        __m128 t3 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((3) << 6) | ((3) << 4) | ((3) << 2) | (3))))), r3);
        _mm_storeu_ps(&out.m00_, _mm_add_ps(_mm_add_ps(t0, t1), _mm_add_ps(t2, t3)));
        l = _mm_loadu_ps(&m10_);
        t0 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((0) << 6) | ((0) << 4) | ((0) << 2) | (0))))), r0);
        t1 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1))))), r1);
        t2 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((2) << 6) | ((2) << 4) | ((2) << 2) | (2))))), r2);
        t3 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((3) << 6) | ((3) << 4) | ((3) << 2) | (3))))), r3);
        _mm_storeu_ps(&out.m10_, _mm_add_ps(_mm_add_ps(t0, t1), _mm_add_ps(t2, t3)));
        l = _mm_loadu_ps(&m20_);
        t0 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((0) << 6) | ((0) << 4) | ((0) << 2) | (0))))), r0);
        t1 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((1) << 6) | ((1) << 4) | ((1) << 2) | (1))))), r1);
        t2 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((2) << 6) | ((2) << 4) | ((2) << 2) | (2))))), r2);
        t3 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(l), (__v4sf)(__m128)(l), (int)((((3) << 6) | ((3) << 4) | ((3) << 2) | (3))))), r3);
        _mm_storeu_ps(&out.m20_, _mm_add_ps(_mm_add_ps(t0, t1), _mm_add_ps(t2, t3)));
        _mm_storeu_ps(&out.m30_, r3);
        return out;
    }
    void SetTranslation(const Vector3& translation)
    {
        m03_ = translation.x_;
        m13_ = translation.y_;
        m23_ = translation.z_;
    }
    void SetRotation(const Matrix3& rotation)
    {
        m00_ = rotation.m00_;
        m01_ = rotation.m01_;
        m02_ = rotation.m02_;
        m10_ = rotation.m10_;
        m11_ = rotation.m11_;
        m12_ = rotation.m12_;
        m20_ = rotation.m20_;
        m21_ = rotation.m21_;
        m22_ = rotation.m22_;
    }
    void SetScale(const Vector3& scale)
    {
        m00_ = scale.x_;
        m11_ = scale.y_;
        m22_ = scale.z_;
    }
    void SetScale(float scale)
    {
        m00_ = scale;
        m11_ = scale;
        m22_ = scale;
    }
    Matrix3 ToMatrix3() const
    {
        return Matrix3(
            m00_,
            m01_,
            m02_,
            m10_,
            m11_,
            m12_,
            m20_,
            m21_,
            m22_
        );
    }
    Matrix4 ToMatrix4() const
    {
        Matrix4 ret;
        _mm_storeu_ps(&ret.m00_, _mm_loadu_ps(&m00_));
        _mm_storeu_ps(&ret.m10_, _mm_loadu_ps(&m10_));
        _mm_storeu_ps(&ret.m20_, _mm_loadu_ps(&m20_));
        _mm_storeu_ps(&ret.m30_, _mm_set_ps(1.f, 0.f, 0.f, 0.f));
        return ret;
    }
    Matrix3 RotationMatrix() const
    {
        Vector3 invScale(
            1.0f / sqrtf(m00_ * m00_ + m10_ * m10_ + m20_ * m20_),
            1.0f / sqrtf(m01_ * m01_ + m11_ * m11_ + m21_ * m21_),
            1.0f / sqrtf(m02_ * m02_ + m12_ * m12_ + m22_ * m22_)
        );
        return ToMatrix3().Scaled(invScale);
    }
    Vector3 Translation() const
    {
        return Vector3(
            m03_,
            m13_,
            m23_
        );
    }
    Quaternion Rotation() const { return Quaternion(RotationMatrix()); }
    Vector3 Scale() const
    {
        return Vector3(
            sqrtf(m00_ * m00_ + m10_ * m10_ + m20_ * m20_),
            sqrtf(m01_ * m01_ + m11_ * m11_ + m21_ * m21_),
            sqrtf(m02_ * m02_ + m12_ * m12_ + m22_ * m22_)
        );
    }
    Vector3 SignedScale(const Matrix3& rotation) const
    {
        return Vector3(
            rotation.m00_ * m00_ + rotation.m10_ * m10_ + rotation.m20_ * m20_,
            rotation.m01_ * m01_ + rotation.m11_ * m11_ + rotation.m21_ * m21_,
            rotation.m02_ * m02_ + rotation.m12_ * m12_ + rotation.m22_ * m22_
        );
    }
    bool Equals(const Matrix3x4& rhs) const
    {
        const float* leftData = Data();
        const float* rightData = rhs.Data();
        for (unsigned i = 0; i < 12; ++i)
        {
            if (!Urho3D::Equals(leftData[i], rightData[i]))
                return false;
        }
        return true;
    }
    void Decompose(Vector3& translation, Quaternion& rotation, Vector3& scale) const;
    Matrix3x4 Inverse() const;
    const float* Data() const { return &m00_; }
    float Element(unsigned i, unsigned j) const { return Data()[i * 4 + j]; }
    Vector4 Row(unsigned i) const { return Vector4(Element(i, 0), Element(i, 1), Element(i, 2), Element(i, 3)); }
    Vector3 Column(unsigned j) const { return Vector3(Element(0, j), Element(1, j), Element(2, j)); }
    String ToString() const;
    float m00_;
    float m01_;
    float m02_;
    float m03_;
    float m10_;
    float m11_;
    float m12_;
    float m13_;
    float m20_;
    float m21_;
    float m22_;
    float m23_;
    static const Matrix3x4 ZERO;
    static const Matrix3x4 IDENTITY;
private:
    void inline SetFromTRS(__m128 t, __m128 q, __m128 s)
    {
        q = ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(q), (__v4sf)(__m128)(q), (int)((((0) << 6) | ((3) << 4) | ((2) << 2) | (1)))));
        __m128 one = _mm_set_ps(0, 0, 0, 1);
        const __m128 sseX1 = _mm_castsi128_ps(_mm_set_epi32((int)0x80000000UL, (int)0x80000000UL, 0, (int)0x80000000UL));
        __m128 q2 = _mm_add_ps(q, q);
        __m128 t2 = _mm_add_ss(_mm_xor_ps(_mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(q), (__v4sf)(__m128)(q), (int)((((3) << 6) | ((3) << 4) | ((3) << 2) | (2))))), ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(q2), (__v4sf)(__m128)(q2), (int)((((0) << 6) | ((1) << 4) | ((2) << 2) | (2)))))), sseX1), one);
        const __m128 sseX0 = ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(sseX1), (__v4sf)(__m128)(sseX1), (int)((((0) << 6) | ((3) << 4) | ((2) << 2) | (1)))));
        __m128 t0 = _mm_mul_ps(((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(q), (__v4sf)(__m128)(q), (int)((((1) << 6) | ((0) << 4) | ((0) << 2) | (1))))), ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(q2), (__v4sf)(__m128)(q2), (int)((((2) << 6) | ((2) << 4) | ((1) << 2) | (1))))));
        __m128 t1 = _mm_xor_ps(t0, sseX0);
        __m128 r0 = _mm_sub_ps(t2, t1);
        __m128 xx2 = _mm_mul_ss(q, q2);
        __m128 r1 = _mm_sub_ps(_mm_xor_ps(t2, sseX0), _mm_move_ss(t1, xx2));
        r1 = ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(r1), (__v4sf)(__m128)(r1), (int)((((2) << 6) | ((3) << 4) | ((0) << 2) | (1)))));
        __m128 r2 = ((__m128) __builtin_ia32_shufps ((__v4sf)(__m128)(_mm_movehl_ps(r0, r1)), (__v4sf)(__m128)(_mm_sub_ss(_mm_sub_ss(one, xx2), t0)), (int)((((2) << 6) | ((0) << 4) | ((3) << 2) | (1)))));
        __m128 tmp0 = _mm_unpacklo_ps(r0, r1);
        __m128 tmp2 = _mm_unpacklo_ps(r2, t);
        __m128 tmp1 = _mm_unpackhi_ps(r0, r1);
        __m128 tmp3 = _mm_unpackhi_ps(r2, t);
        _mm_storeu_ps(&m00_, _mm_mul_ps(_mm_movelh_ps(tmp0, tmp2), s));
        _mm_storeu_ps(&m10_, _mm_mul_ps(_mm_movehl_ps(tmp2, tmp0), s));
        _mm_storeu_ps(&m20_, _mm_mul_ps(_mm_movelh_ps(tmp1, tmp3), s));
    }
};
inline Matrix3x4 operator *(float lhs, const Matrix3x4& rhs) { return rhs * lhs; }
}
       
namespace Urho3D
{
class Plane
{
public:
    Plane() :
        d_(0.0f)
    {
    }
    Plane(const Plane& plane) :
        normal_(plane.normal_),
        absNormal_(plane.absNormal_),
        d_(plane.d_)
    {
    }
    Plane(const Vector3& v0, const Vector3& v1, const Vector3& v2)
    {
        Define(v0, v1, v2);
    }
    Plane(const Vector3& normal, const Vector3& point)
    {
        Define(normal, point);
    }
    Plane(const Vector4& plane)
    {
        Define(plane);
    }
    Plane& operator =(const Plane& rhs)
    {
        normal_ = rhs.normal_;
        absNormal_ = rhs.absNormal_;
        d_ = rhs.d_;
        return *this;
    }
    void Define(const Vector3& v0, const Vector3& v1, const Vector3& v2)
    {
        Vector3 dist1 = v1 - v0;
        Vector3 dist2 = v2 - v0;
        Define(dist1.CrossProduct(dist2), v0);
    }
    void Define(const Vector3& normal, const Vector3& point)
    {
        normal_ = normal.Normalized();
        absNormal_ = normal_.Abs();
        d_ = -normal_.DotProduct(point);
    }
    void Define(const Vector4& plane)
    {
        normal_ = Vector3(plane.x_, plane.y_, plane.z_);
        absNormal_ = normal_.Abs();
        d_ = plane.w_;
    }
    void Transform(const Matrix3& transform);
    void Transform(const Matrix3x4& transform);
    void Transform(const Matrix4& transform);
    Vector3 Project(const Vector3& point) const { return point - normal_ * (normal_.DotProduct(point) + d_); }
    float Distance(const Vector3& point) const { return normal_.DotProduct(point) + d_; }
    Vector3 Reflect(const Vector3& direction) const { return direction - (2.0f * normal_.DotProduct(direction) * normal_); }
    Matrix3x4 ReflectionMatrix() const;
    Plane Transformed(const Matrix3& transform) const;
    Plane Transformed(const Matrix3x4& transform) const;
    Plane Transformed(const Matrix4& transform) const;
    Vector4 ToVector4() const { return Vector4(normal_, d_); }
    Vector3 normal_;
    Vector3 absNormal_;
    float d_;
    static const Plane UP;
};
}
       
namespace Urho3D
{
class BoundingBox;
class Polyhedron;
class Frustum;
class Sphere
{
public:
    Sphere() :
        center_(Vector3::ZERO),
        radius_(-M_INFINITY)
    {
    }
    Sphere(const Sphere& sphere) :
        center_(sphere.center_),
        radius_(sphere.radius_)
    {
    }
    Sphere(const Vector3& center, float radius) :
        center_(center),
        radius_(radius)
    {
    }
    Sphere(const Vector3* vertices, unsigned count)
    {
        Define(vertices, count);
    }
    Sphere(const BoundingBox& box)
    {
        Define(box);
    }
    Sphere(const Frustum& frustum)
    {
        Define(frustum);
    }
    Sphere(const Polyhedron& poly)
    {
        Define(poly);
    }
    Sphere& operator =(const Sphere& rhs)
    {
        center_ = rhs.center_;
        radius_ = rhs.radius_;
        return *this;
    }
    bool operator ==(const Sphere& rhs) const { return center_ == rhs.center_ && radius_ == rhs.radius_; }
    bool operator !=(const Sphere& rhs) const { return center_ != rhs.center_ || radius_ != rhs.radius_; }
    void Define(const Sphere& sphere)
    {
        Define(sphere.center_, sphere.radius_);
    }
    void Define(const Vector3& center, float radius)
    {
        center_ = center;
        radius_ = radius;
    }
    void Define(const Vector3* vertices, unsigned count);
    void Define(const BoundingBox& box);
    void Define(const Frustum& frustum);
    void Define(const Polyhedron& poly);
    void Merge(const Vector3& point)
    {
        if (radius_ < 0.0f)
        {
            center_ = point;
            radius_ = 0.0f;
            return;
        }
        Vector3 offset = point - center_;
        float dist = offset.Length();
        if (dist > radius_)
        {
            float half = (dist - radius_) * 0.5f;
            radius_ += half;
            center_ += (half / dist) * offset;
        }
    }
    void Merge(const Vector3* vertices, unsigned count);
    void Merge(const BoundingBox& box);
    void Merge(const Frustum& frustum);
    void Merge(const Polyhedron& poly);
    void Merge(const Sphere& sphere);
    void Clear()
    {
        center_ = Vector3::ZERO;
        radius_ = -M_INFINITY;
    }
    bool Defined() const
    {
        return radius_ >= 0.0f;
    }
    Intersection IsInside(const Vector3& point) const
    {
        float distSquared = (point - center_).LengthSquared();
        if (distSquared < radius_ * radius_)
            return INSIDE;
        else
            return OUTSIDE;
    }
    Intersection IsInside(const Sphere& sphere) const
    {
        float dist = (sphere.center_ - center_).Length();
        if (dist >= sphere.radius_ + radius_)
            return OUTSIDE;
        else if (dist + sphere.radius_ < radius_)
            return INSIDE;
        else
            return INTERSECTS;
    }
    Intersection IsInsideFast(const Sphere& sphere) const
    {
        float distSquared = (sphere.center_ - center_).LengthSquared();
        float combined = sphere.radius_ + radius_;
        if (distSquared >= combined * combined)
            return OUTSIDE;
        else
            return INSIDE;
    }
    Intersection IsInside(const BoundingBox& box) const;
    Intersection IsInsideFast(const BoundingBox& box) const;
    float Distance(const Vector3& point) const { return Max((point - center_).Length() - radius_, 0.0f); }
    Vector3 center_;
    float radius_;
};
}
namespace Urho3D
{
enum FrustumPlane
{
    PLANE_NEAR = 0,
    PLANE_LEFT,
    PLANE_RIGHT,
    PLANE_UP,
    PLANE_DOWN,
    PLANE_FAR,
};
static const unsigned NUM_FRUSTUM_PLANES = 6;
static const unsigned NUM_FRUSTUM_VERTICES = 8;
class Frustum
{
public:
    Frustum();
    Frustum(const Frustum& frustum);
    Frustum& operator =(const Frustum& rhs);
    void
        Define(float fov, float aspectRatio, float zoom, float nearZ, float farZ, const Matrix3x4& transform = Matrix3x4::IDENTITY);
    void Define(const Vector3& near, const Vector3& far, const Matrix3x4& transform = Matrix3x4::IDENTITY);
    void Define(const BoundingBox& box, const Matrix3x4& transform = Matrix3x4::IDENTITY);
    void Define(const Matrix4& projection);
    void DefineOrtho
        (float orthoSize, float aspectRatio, float zoom, float nearZ, float farZ, const Matrix3x4& transform = Matrix3x4::IDENTITY);
    void DefineSplit(const Matrix4& projection, float near, float far);
    void Transform(const Matrix3& transform);
    void Transform(const Matrix3x4& transform);
    Intersection IsInside(const Vector3& point) const
    {
        for (unsigned i = 0; i < NUM_FRUSTUM_PLANES; ++i)
        {
            if (planes_[i].Distance(point) < 0.0f)
                return OUTSIDE;
        }
        return INSIDE;
    }
    Intersection IsInside(const Sphere& sphere) const
    {
        bool allInside = true;
        for (unsigned i = 0; i < NUM_FRUSTUM_PLANES; ++i)
        {
            float dist = planes_[i].Distance(sphere.center_);
            if (dist < -sphere.radius_)
                return OUTSIDE;
            else if (dist < sphere.radius_)
                allInside = false;
        }
        return allInside ? INSIDE : INTERSECTS;
    }
    Intersection IsInsideFast(const Sphere& sphere) const
    {
        for (unsigned i = 0; i < NUM_FRUSTUM_PLANES; ++i)
        {
            if (planes_[i].Distance(sphere.center_) < -sphere.radius_)
                return OUTSIDE;
        }
        return INSIDE;
    }
    Intersection IsInside(const BoundingBox& box) const
    {
        Vector3 center = box.Center();
        Vector3 edge = center - box.min_;
        bool allInside = true;
        for (unsigned i = 0; i < NUM_FRUSTUM_PLANES; ++i)
        {
            const Plane& plane = planes_[i];
            float dist = plane.normal_.DotProduct(center) + plane.d_;
            float absDist = plane.absNormal_.DotProduct(edge);
            if (dist < -absDist)
                return OUTSIDE;
            else if (dist < absDist)
                allInside = false;
        }
        return allInside ? INSIDE : INTERSECTS;
    }
    Intersection IsInsideFast(const BoundingBox& box) const
    {
        Vector3 center = box.Center();
        Vector3 edge = center - box.min_;
        for (unsigned i = 0; i < NUM_FRUSTUM_PLANES; ++i)
        {
            const Plane& plane = planes_[i];
            float dist = plane.normal_.DotProduct(center) + plane.d_;
            float absDist = plane.absNormal_.DotProduct(edge);
            if (dist < -absDist)
                return OUTSIDE;
        }
        return INSIDE;
    }
    float Distance(const Vector3& point) const
    {
        float distance = 0.0f;
        for (unsigned i = 0; i < NUM_FRUSTUM_PLANES; ++i)
            distance = Max(-planes_[i].Distance(point), distance);
        return distance;
    }
    Frustum Transformed(const Matrix3& transform) const;
    Frustum Transformed(const Matrix3x4& transform) const;
    Rect Projected(const Matrix4& transform) const;
    void UpdatePlanes();
    Plane planes_[NUM_FRUSTUM_PLANES];
    Vector3 vertices_[NUM_FRUSTUM_VERTICES];
};
}
       
namespace Urho3D
{
class Matrix2
{
public:
    Matrix2() :
        m00_(1.0f),
        m01_(0.0f),
        m10_(0.0f),
        m11_(1.0f)
    {
    }
    Matrix2(const Matrix2& matrix) :
        m00_(matrix.m00_),
        m01_(matrix.m01_),
        m10_(matrix.m10_),
        m11_(matrix.m11_)
    {
    }
    Matrix2(float v00, float v01,
            float v10, float v11) :
        m00_(v00),
        m01_(v01),
        m10_(v10),
        m11_(v11)
    {
    }
    explicit Matrix2(const float* data) :
        m00_(data[0]),
        m01_(data[1]),
        m10_(data[2]),
        m11_(data[3])
    {
    }
    Matrix2& operator =(const Matrix2& rhs)
    {
        m00_ = rhs.m00_;
        m01_ = rhs.m01_;
        m10_ = rhs.m10_;
        m11_ = rhs.m11_;
        return *this;
    }
    bool operator ==(const Matrix2& rhs) const
    {
        const float* leftData = Data();
        const float* rightData = rhs.Data();
        for (unsigned i = 0; i != 4; ++i)
        {
            if (leftData[i] != rightData[i])
                return false;
        }
        return true;
    }
    bool operator !=(const Matrix2& rhs) const { return !(*this == rhs); }
    Vector2 operator *(const Vector2& rhs) const
    {
        return Vector2(
            m00_ * rhs.x_ + m01_ * rhs.y_,
            m10_ * rhs.x_ + m11_ * rhs.y_
        );
    }
    Matrix2 operator +(const Matrix2& rhs) const
    {
        return Matrix2(
            m00_ + rhs.m00_,
            m01_ + rhs.m01_,
            m10_ + rhs.m10_,
            m11_ + rhs.m11_
        );
    }
    Matrix2 operator -(const Matrix2& rhs) const
    {
        return Matrix2(
            m00_ - rhs.m00_,
            m01_ - rhs.m01_,
            m10_ - rhs.m10_,
            m11_ - rhs.m11_
        );
    }
    Matrix2 operator *(float rhs) const
    {
        return Matrix2(
            m00_ * rhs,
            m01_ * rhs,
            m10_ * rhs,
            m11_ * rhs
        );
    }
    Matrix2 operator *(const Matrix2& rhs) const
    {
        return Matrix2(
            m00_ * rhs.m00_ + m01_ * rhs.m10_,
            m00_ * rhs.m01_ + m01_ * rhs.m11_,
            m10_ * rhs.m00_ + m11_ * rhs.m10_,
            m10_ * rhs.m01_ + m11_ * rhs.m11_
        );
    }
    void SetScale(const Vector2& scale)
    {
        m00_ = scale.x_;
        m11_ = scale.y_;
    }
    void SetScale(float scale)
    {
        m00_ = scale;
        m11_ = scale;
    }
    Vector2 Scale() const
    {
        return Vector2(
            sqrtf(m00_ * m00_ + m10_ * m10_),
            sqrtf(m01_ * m01_ + m11_ * m11_)
        );
    }
    Matrix2 Transpose() const
    {
        return Matrix2(
            m00_,
            m10_,
            m01_,
            m11_
        );
    }
    Matrix2 Scaled(const Vector2& scale) const
    {
        return Matrix2(
            m00_ * scale.x_,
            m01_ * scale.y_,
            m10_ * scale.x_,
            m11_ * scale.y_
        );
    }
    bool Equals(const Matrix2& rhs) const
    {
        const float* leftData = Data();
        const float* rightData = rhs.Data();
        for (unsigned i = 0; i != 4; ++i)
        {
            if (!Urho3D::Equals(leftData[i], rightData[i]))
                return false;
        }
        return true;
    }
    Matrix2 Inverse() const;
    const float* Data() const { return &m00_; }
    String ToString() const;
    float m00_;
    float m01_;
    float m10_;
    float m11_;
    static void BulkTranspose(float* dest, const float* src, unsigned count)
    {
        for (unsigned i = 0; i < count; ++i)
        {
            dest[0] = src[0];
            dest[1] = src[2];
            dest[2] = src[1];
            dest[3] = src[3];
            dest += 4;
            src += 4;
        }
    }
    static const Matrix2 ZERO;
    static const Matrix2 IDENTITY;
};
inline Matrix2 operator *(float lhs, const Matrix2& rhs) { return rhs * lhs; }
}
       
namespace Urho3D
{
class BoundingBox;
class Frustum;
class Matrix3;
class Matrix3x4;
class Plane;
class Polyhedron
{
public:
    Polyhedron()
    {
    }
    Polyhedron(const Polyhedron& polyhedron) :
        faces_(polyhedron.faces_)
    {
    }
    Polyhedron(const Vector<PODVector<Vector3> >& faces) :
        faces_(faces)
    {
    }
    Polyhedron(const BoundingBox& box)
    {
        Define(box);
    }
    Polyhedron(const Frustum& frustum)
    {
        Define(frustum);
    }
    ~Polyhedron();
    Polyhedron& operator =(const Polyhedron& rhs)
    {
        faces_ = rhs.faces_;
        return *this;
    }
    void Define(const BoundingBox& box);
    void Define(const Frustum& frustum);
    void AddFace(const Vector3& v0, const Vector3& v1, const Vector3& v2);
    void AddFace(const Vector3& v0, const Vector3& v1, const Vector3& v2, const Vector3& v3);
    void AddFace(const PODVector<Vector3>& face);
    void Clip(const Plane& plane);
    void Clip(const BoundingBox& box);
    void Clip(const Frustum& box);
    void Clear();
    void Transform(const Matrix3& transform);
    void Transform(const Matrix3x4& transform);
    Polyhedron Transformed(const Matrix3& transform) const;
    Polyhedron Transformed(const Matrix3x4& transform) const;
    bool Empty() const { return faces_.Empty(); }
    Vector<PODVector<Vector3> > faces_;
private:
    void SetFace(unsigned index, const Vector3& v0, const Vector3& v1, const Vector3& v2);
    void SetFace(unsigned index, const Vector3& v0, const Vector3& v1, const Vector3& v2, const Vector3& v3);
    PODVector<Vector3> clippedVertices_;
    PODVector<Vector3> outFace_;
};
}
       
namespace Urho3D
{
class BoundingBox;
class Frustum;
class Plane;
class Sphere;
class Ray
{
public:
    Ray()
    {
    }
    Ray(const Vector3& origin, const Vector3& direction)
    {
        Define(origin, direction);
    }
    Ray(const Ray& ray) :
        origin_(ray.origin_),
        direction_(ray.direction_)
    {
    }
    Ray& operator =(const Ray& rhs)
    {
        origin_ = rhs.origin_;
        direction_ = rhs.direction_;
        return *this;
    }
    bool operator ==(const Ray& rhs) const { return origin_ == rhs.origin_ && direction_ == rhs.direction_; }
    bool operator !=(const Ray& rhs) const { return origin_ != rhs.origin_ || direction_ != rhs.direction_; }
    void Define(const Vector3& origin, const Vector3& direction)
    {
        origin_ = origin;
        direction_ = direction.Normalized();
    }
    Vector3 Project(const Vector3& point) const
    {
        Vector3 offset = point - origin_;
        return origin_ + offset.DotProduct(direction_) * direction_;
    }
    float Distance(const Vector3& point) const
    {
        Vector3 projected = Project(point);
        return (point - projected).Length();
    }
    Vector3 ClosestPoint(const Ray& ray) const;
    float HitDistance(const Plane& plane) const;
    float HitDistance(const BoundingBox& box) const;
    float HitDistance(const Frustum& frustum, bool solidInside = true) const;
    float HitDistance(const Sphere& sphere) const;
    float HitDistance(const Vector3& v0, const Vector3& v1, const Vector3& v2, Vector3* outNormal = 0, Vector3* outBary = 0) const;
    float HitDistance
        (const void* vertexData, unsigned vertexStride, unsigned vertexStart, unsigned vertexCount, Vector3* outNormal = 0,
            Vector2* outUV = 0, unsigned uvOffset = 0) const;
    float HitDistance(const void* vertexData, unsigned vertexStride, const void* indexData, unsigned indexSize, unsigned indexStart,
        unsigned indexCount, Vector3* outNormal = 0, Vector2* outUV = 0, unsigned uvOffset = 0) const;
    bool InsideGeometry(const void* vertexData, unsigned vertexSize, unsigned vertexStart, unsigned vertexCount) const;
    bool InsideGeometry(const void* vertexData, unsigned vertexSize, const void* indexData, unsigned indexSize, unsigned indexStart,
        unsigned indexCount) const;
    Ray Transformed(const Matrix3x4& transform) const;
    Vector3 origin_;
    Vector3 direction_;
};
}
       
namespace Urho3D
{
class StringHash
{
public:
    StringHash() :
        value_(0)
    {
    }
    StringHash(const StringHash& rhs) :
        value_(rhs.value_)
    {
    }
    explicit StringHash(unsigned value) :
        value_(value)
    {
    }
    StringHash(const char* str);
    StringHash(const String& str);
    StringHash& operator =(const StringHash& rhs)
    {
        value_ = rhs.value_;
        return *this;
    }
    StringHash operator +(const StringHash& rhs) const
    {
        StringHash ret;
        ret.value_ = value_ + rhs.value_;
        return ret;
    }
    StringHash& operator +=(const StringHash& rhs)
    {
        value_ += rhs.value_;
        return *this;
    }
    bool operator ==(const StringHash& rhs) const { return value_ == rhs.value_; }
    bool operator !=(const StringHash& rhs) const { return value_ != rhs.value_; }
    bool operator <(const StringHash& rhs) const { return value_ < rhs.value_; }
    bool operator >(const StringHash& rhs) const { return value_ > rhs.value_; }
    operator bool() const { return value_ != 0; }
    unsigned Value() const { return value_; }
    String ToString() const;
    unsigned ToHash() const { return value_; }
    static unsigned Calculate(const char* str);
    static const StringHash ZERO;
private:
    unsigned value_;
};
}
