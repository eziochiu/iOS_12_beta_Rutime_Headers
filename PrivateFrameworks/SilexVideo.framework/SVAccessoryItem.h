/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVAccessoryItem : NSObject <SVAccessoryItem> {
    unsigned long long  _displayMode;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (unsigned long long)displayMode;
- (id)initWithView:(id)arg1;
- (void)setDisplayMode:(unsigned long long)arg1;
- (id)view;

@end
