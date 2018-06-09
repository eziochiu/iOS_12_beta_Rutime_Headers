/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSEventQueueEvent : NSObject {
    id /* block */  _handler;
    NSString * _name;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSString *name;

+ (id)eventWithName:(id)arg1 handler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_execute;
- (id)description;
- (void)execute;
- (void)executeFromEventQueue;
- (id /* block */)handler;
- (bool)isEqualToEvent:(id)arg1;
- (id)name;
- (void)setHandler:(id /* block */)arg1;
- (void)setName:(id)arg1;

@end
