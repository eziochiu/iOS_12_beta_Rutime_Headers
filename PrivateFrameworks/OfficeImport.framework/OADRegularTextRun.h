/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADRegularTextRun : OADTextRun {
    NSMutableString * mText;
}

- (unsigned long long)characterCount;
- (void)dealloc;
- (id)init;
- (bool)isEmpty;
- (bool)isSimilarToTextRun:(id)arg1;
- (id)text;

@end
