/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface THAController : NSObject {
    struct __IOHIDEventSystemClient { } * _hidSystemClient;
    unsigned int  _identifier;
    unsigned long long  _lastServerTimestamp;
    unsigned long long  _lastTimestampDelta;
    NSString * _name;
    bool  _reachable;
    unsigned long long  _resetTimestampDelta;
    bool  _selected;
    NSSet * _selectedButtons;
    unsigned long long  _ticksPerSecond;
}

@property (nonatomic) unsigned int identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool reachable;
@property (nonatomic) bool selected;
@property (nonatomic, retain) NSSet *selectedButtons;
@property (nonatomic) unsigned long long ticksPerSecond;

+ (id)selectButtonConfiguration:(id)arg1;

- (void).cxx_destruct;
- (void)_remoteConnectedWithOld:(bool)arg1;
- (void)dispatchButtonEvent:(id)arg1;
- (unsigned int)identifier;
- (id)initWithName:(id)arg1 identifier:(unsigned int)arg2 ticksPerSecond:(unsigned long long)arg3 supportedButtons:(id)arg4;
- (id)name;
- (bool)reachable;
- (bool)selected;
- (id)selectedButtons;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setReachable:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedButtons:(id)arg1;
- (void)setTicksPerSecond:(unsigned long long)arg1;
- (unsigned long long)ticksPerSecond;
- (void)updateSelectedButtons:(id)arg1;

@end
