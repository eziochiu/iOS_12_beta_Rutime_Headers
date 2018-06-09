/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSBarButtonItem : UIBarButtonItem <CPSButtonDelegate> {
    <CPSButtonDelegate> * _delegate;
    NSUUID * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPSButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)didSelectButton:(id)arg1;
- (id)identifier;
- (id)initWithCPBarButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;

@end
