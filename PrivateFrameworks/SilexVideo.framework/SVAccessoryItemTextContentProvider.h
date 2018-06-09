/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVAccessoryItemTextContentProvider : NSObject <SVAccessoryItemContentProviding> {
    SVAccessoryItemButton * _accessoryItemButton;
    NSString * _headerText;
    <SVVideoTitleProviding> * _titleProvider;
}

@property (nonatomic, readonly) SVAccessoryItemButton *accessoryItemButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *headerText;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoTitleProviding> *titleProvider;

- (void).cxx_destruct;
- (id)accessoryItemButton;
- (id)headerText;
- (id)initWithAccessoryItemButton:(id)arg1 titleProvider:(id)arg2 headerText:(id)arg3;
- (id)titleProvider;
- (void)updateAccessoryItemForVideo:(id)arg1 animated:(bool)arg2;

@end
