/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface _HOUserAccessItem : HFItem {
    id /* block */  _resultsBlock;
    HMUser * _user;
}

@property (nonatomic, readonly, copy) id /* block */ resultsBlock;
@property (nonatomic, readonly) HMUser *user;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithUser:(id)arg1 resultsBlock:(id /* block */)arg2;
- (id /* block */)resultsBlock;
- (id)user;

@end
