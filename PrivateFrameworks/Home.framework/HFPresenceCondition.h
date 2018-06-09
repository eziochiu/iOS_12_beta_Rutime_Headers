/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFPresenceCondition : HFCondition {
    HMPresenceEvent * _presenceEvent;
}

@property (nonatomic, retain) HMPresenceEvent *presenceEvent;

- (void).cxx_destruct;
- (id)initWithPredicate:(id)arg1;
- (id)initWithPresenceEvent:(id)arg1;
- (id)presenceEvent;
- (void)setPresenceEvent:(id)arg1;

@end
