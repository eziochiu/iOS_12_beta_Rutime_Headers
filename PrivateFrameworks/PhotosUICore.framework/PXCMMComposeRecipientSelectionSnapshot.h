/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMComposeRecipientSelectionSnapshot : NSObject {
    NSArray * _selectedComposeRecipients;
    NSArray * _selectedRecipients;
}

@property (nonatomic, readonly, copy) NSArray *selectedComposeRecipients;
@property (nonatomic, readonly, copy) NSArray *selectedRecipients;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSelectedComposeRecipients:(id)arg1 selectedRecipients:(id)arg2;
- (id)selectedComposeRecipients;
- (id)selectedRecipients;

@end
