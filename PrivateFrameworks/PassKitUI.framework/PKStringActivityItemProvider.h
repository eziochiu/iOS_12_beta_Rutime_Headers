/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKStringActivityItemProvider : UIActivityItemProvider {
    NSString * _passOrganizationName;
    NSString * _passSharingString;
    PKPassView * _passView;
}

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize { double x1; double x2; })arg3;
- (void)dealloc;
- (id)initWithPass:(id)arg1 andPassView:(id)arg2;
- (id)item;

@end
