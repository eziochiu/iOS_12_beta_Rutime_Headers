/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPUIAttachmentData : NSObject {
    TSWPUIGraphicalAttachment * _attachment;
    long long  _charIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
}

@property (nonatomic, readonly) TSWPUIGraphicalAttachment *attachment;
@property (nonatomic, readonly) long long charIndex;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } location;

- (void).cxx_destruct;
- (void)adjustAlignmentBy:(double)arg1;
- (id)attachment;
- (long long)charIndex;
- (id)initWithAttachment:(id)arg1 location:(struct CGPoint { double x1; double x2; })arg2 charIndex:(long long)arg3;
- (struct CGPoint { double x1; double x2; })location;

@end
