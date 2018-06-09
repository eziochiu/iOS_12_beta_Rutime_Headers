/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMBindingControllerUpdateRecord : NSObject {
    bool  _cancelled;
    id /* block */  _preUpdate;
    id /* block */  _update;
}

@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic, copy) id /* block */ preUpdate;
@property (nonatomic, copy) id /* block */ update;

- (void).cxx_destruct;
- (bool)isCancelled;
- (id /* block */)preUpdate;
- (void)setCancelled:(bool)arg1;
- (void)setPreUpdate:(id /* block */)arg1;
- (void)setUpdate:(id /* block */)arg1;
- (id /* block */)update;

@end
