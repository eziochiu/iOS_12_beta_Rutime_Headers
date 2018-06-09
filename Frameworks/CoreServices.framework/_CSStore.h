/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _CSStore : NSObject <NSMutableCopying, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    struct unique_ptr<CSStore2::Store, std::__1::default_delete<CSStore2::Store> > { 
        struct __compressed_pair<CSStore2::Store *, std::__1::default_delete<CSStore2::Store> > { 
            struct Store {} *__value_; 
        } __ptr_; 
    }  _store;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithError:(id*)arg1;
- (id)initWithStoreNoCopy:(struct Store { id x1; /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*x2; const const void*x3; void*x4; void*x5; void*x6; in short x7; int x8; void*x9; in void*x10; double x11; void*x12; int x13; in void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; unsigned int x21[64]; }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1 error:(id*)arg2;
- (void)setExpectedAccessQueue:(id)arg1;

@end
