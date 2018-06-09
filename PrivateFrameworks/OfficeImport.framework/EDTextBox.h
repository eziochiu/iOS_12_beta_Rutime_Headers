/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTextBox : NSObject {
    EDAlignmentInfo * mAlignmentInfo;
    EDProtection * mProtection;
    EDString * mText;
}

+ (id)textBox;

- (id)alignmentInfo;
- (void)dealloc;
- (id)description;
- (id)protection;
- (void)setAlignmentInfo:(id)arg1;
- (void)setProtection:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
