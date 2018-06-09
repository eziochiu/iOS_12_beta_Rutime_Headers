/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUAutoFillDisplayData : NSObject {
    NSArray * _fillMatches;
    NSString * _label;
}

@property (nonatomic, readonly, copy) NSArray *fillMatches;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, readonly) NSString *property;
@property (nonatomic, readonly) NSString *valueString;

- (void).cxx_destruct;
- (id)addressStringForLabel:(id)arg1;
- (id)fillMatches;
- (id)initWithLabel:(id)arg1 fillMatches:(id)arg2;
- (id)label;
- (id)property;
- (void)setLabel:(id)arg1;
- (id)valueString;

@end
