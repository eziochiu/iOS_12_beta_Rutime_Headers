/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKComposeHeaderWithStaticRecipients : GKComposeHeaderField {
    NSArray * _recipientNameStrings;
}

@property (nonatomic, retain) NSArray *recipientNameStrings;

- (void)dealloc;
- (void)layoutSubviews;
- (id)recipientNameStrings;
- (void)setRecipientNameStrings:(id)arg1;

@end
