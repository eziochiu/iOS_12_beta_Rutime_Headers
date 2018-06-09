/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface _SCRCStackNode : NSObject {
    _SCRCStackNode * _next;
    id  _object;
    _SCRCStackNode * _prev;
}

@property (nonatomic, retain) _SCRCStackNode *next;
@property (nonatomic, retain) id object;
@property (nonatomic, retain) _SCRCStackNode *prev;

- (void).cxx_destruct;
- (id)next;
- (id)object;
- (id)prev;
- (void)setNext:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setPrev:(id)arg1;

@end
