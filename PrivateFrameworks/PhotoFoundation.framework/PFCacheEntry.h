/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFCacheEntry : NSObject {
    unsigned long long  _createTime;
    <NSCopying><NSObject> * _key;
    unsigned long long  _lastReadTime;
    unsigned long long  _readCount;
    id  _value;
}

- (void).cxx_destruct;
- (unsigned long long)createTime;
- (id)description;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (id)key;
- (unsigned long long)lastReadTime;
- (unsigned long long)readCount;
- (void)touch;
- (id)value;

@end
