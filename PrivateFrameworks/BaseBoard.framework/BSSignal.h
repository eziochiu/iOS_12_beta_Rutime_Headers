/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSignal : NSObject {
    bool  _signalled;
}

- (bool)hasBeenSignalled;
- (id)init;
- (void)reset;
- (void)signal;

@end
