/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeStillImageReferenceFrameBracketedCaptureSequenceNumberMessage : BWNodeMessage {
    int  _referenceFrameBracketedCaptureSequenceNumber;
}

@property (readonly) int referenceFrameBracketedCaptureSequenceNumber;

+ (id)newMessageWithStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1;

- (id)_initWithStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1;
- (int)referenceFrameBracketedCaptureSequenceNumber;

@end
