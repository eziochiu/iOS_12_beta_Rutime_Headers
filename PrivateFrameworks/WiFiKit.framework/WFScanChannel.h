/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFScanChannel : NSObject {
    long long  _channel;
    long long  _flags;
}

@property (nonatomic) long long channel;
@property (nonatomic) long long flags;

- (long long)channel;
- (id)description;
- (long long)flags;
- (id)init;
- (id)initWithChannel:(long long)arg1 flags:(long long)arg2;
- (void)setChannel:(long long)arg1;
- (void)setFlags:(long long)arg1;

@end
