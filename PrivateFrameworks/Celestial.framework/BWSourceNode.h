/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSourceNode : BWNode {
    <BWSourceNodeErrorDelegate> * _errorDelegate;
}

@property (nonatomic, readonly) struct OpaqueCMClock { }*clock;
@property (nonatomic) <BWSourceNodeErrorDelegate> *errorDelegate;

- (struct OpaqueCMClock { }*)clock;
- (id)errorDelegate;
- (void)makeOutputsLiveIfNeeded;
- (id)nodeType;
- (void)setErrorDelegate:(id)arg1;
- (bool)start:(id*)arg1;
- (bool)stop:(id*)arg1;

@end