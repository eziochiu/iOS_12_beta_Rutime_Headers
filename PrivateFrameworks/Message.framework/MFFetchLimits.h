/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFFetchLimits : NSObject {
    unsigned long long  _fetchMaxBytes;
    unsigned long long  _fetchMinBytes;
    unsigned long long  _minBytesLeft;
}

@property (nonatomic) unsigned long long fetchMaxBytes;
@property (nonatomic) unsigned long long fetchMinBytes;
@property (nonatomic) unsigned long long minBytesLeft;

- (id)description;
- (unsigned long long)fetchMaxBytes;
- (unsigned long long)fetchMinBytes;
- (id)init;
- (unsigned long long)minBytesLeft;
- (void)setFetchMaxBytes:(unsigned long long)arg1;
- (void)setFetchMinBytes:(unsigned long long)arg1;
- (void)setMinBytesLeft:(unsigned long long)arg1;

@end
