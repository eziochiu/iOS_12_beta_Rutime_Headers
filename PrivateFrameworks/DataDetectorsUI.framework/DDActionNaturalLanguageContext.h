/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDActionNaturalLanguageContext : NSObject {
    NSArray * _associatedResults;
    NSString * _leadingText;
    struct __DDResult { } * _result;
    NSString * _trailingText;
}

@property (retain) NSArray *associatedResults;
@property (retain) NSString *leadingText;
@property (retain) struct __DDResult { }*result;
@property (retain) NSString *trailingText;

- (void).cxx_destruct;
- (id)associatedResults;
- (void)dealloc;
- (id)leadingText;
- (struct __DDResult { }*)result;
- (void)setAssociatedResults:(id)arg1;
- (void)setLeadingText:(id)arg1;
- (void)setResult:(struct __DDResult { }*)arg1;
- (void)setTrailingText:(id)arg1;
- (id)trailingText;

@end
