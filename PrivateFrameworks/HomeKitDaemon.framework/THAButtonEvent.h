/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface THAButtonEvent : NSObject {
    THAButton * _button;
    unsigned long long  _state;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) THAButton *button;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)button;
- (void)setButton:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)state;
- (unsigned long long)timestamp;

@end
