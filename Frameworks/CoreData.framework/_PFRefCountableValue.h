/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFRefCountableValue : NSObject <NSCopying> {
    long long  _refCount;
    id  _value;
}

@property (nonatomic, readonly) id value;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)decrementRefCount;
- (long long)incrementRefCount;
- (id)initWithValue:(id)arg1;
- (long long)refCount;
- (id)value;

@end
