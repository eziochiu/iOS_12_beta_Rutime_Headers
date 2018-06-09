/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIAtlas : NSObject {
    unsigned long long  _height;
    int  _instanceCount;
    unsigned long long  _status;
    NSString * _uuid;
    unsigned long long  _width;
}

@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) long long instanceCount;
@property (nonatomic) unsigned long long status;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) unsigned long long width;

- (void).cxx_destruct;
- (id)backing;
- (void)decrementInstanceCount;
- (unsigned long long)height;
- (void)incrementInstanceCount;
- (id)initWithUuid:(id)arg1;
- (long long)instanceCount;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;
- (id)uuid;
- (unsigned long long)width;

@end
