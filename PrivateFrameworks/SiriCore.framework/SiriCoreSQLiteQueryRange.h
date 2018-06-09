/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreSQLiteQueryRange : NSObject <NSCopying> {
    unsigned long long  _limit;
    unsigned long long  _offset;
}

@property (nonatomic, readonly) unsigned long long limit;
@property (nonatomic, readonly) unsigned long long offset;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithLimit:(unsigned long long)arg1;
- (id)initWithLimit:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)limit;
- (unsigned long long)offset;

@end
