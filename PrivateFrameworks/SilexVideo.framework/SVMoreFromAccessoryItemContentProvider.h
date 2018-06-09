/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVMoreFromAccessoryItemContentProvider : NSObject <SVAccessoryItemContentProviding> {
    SVMoreFromButton * _accessoryItemButton;
    id /* block */  _logoCancellationBlock;
    <SVMoreFromPublisherLogoProviding> * _logoProvider;
    <SVMoreFromPublisherActionTitleProviding> * _titleProvider;
}

@property (nonatomic, readonly) SVMoreFromButton *accessoryItemButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ logoCancellationBlock;
@property (nonatomic, readonly) <SVMoreFromPublisherLogoProviding> *logoProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVMoreFromPublisherActionTitleProviding> *titleProvider;

- (void).cxx_destruct;
- (id)accessoryItemButton;
- (id)initWithMoreFromButton:(id)arg1 titleProvider:(id)arg2 logoProvider:(id)arg3;
- (id /* block */)logoCancellationBlock;
- (id)logoProvider;
- (void)setLogoCancellationBlock:(id /* block */)arg1;
- (id)titleProvider;
- (void)updateAccessoryItemForVideo:(id)arg1 animated:(bool)arg2;

@end
