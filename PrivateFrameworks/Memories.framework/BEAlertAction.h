/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface BEAlertAction : UIAlertAction {
    id /* block */  _actionHandler;
    long long  _tag;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic) long long tag;

- (void).cxx_destruct;
- (id /* block */)actionHandler;
- (void)doActionHandler;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 tag:(long long)arg3 action:(id /* block */)arg4;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setTag:(long long)arg1;
- (long long)tag;

@end
