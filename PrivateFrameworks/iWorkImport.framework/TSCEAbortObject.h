/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEAbortObject : NSObject {
    bool  _isAborted;
}

@property (readonly) bool isAborted;

- (id)initWithSecondsTillAbort:(int)arg1;
- (bool)isAborted;

@end
