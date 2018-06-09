/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSURLQueue : NSObject {
    bool  _pad1;
    bool  _pad2;
    bool  _pad3;
    unsigned long long  count;
    NSURLQueueNode * head;
    id  monitor;
    NSURLQueueNode * tail;
    bool  waitOnTake;
}

+ (id)newNode;

- (void)clear;
- (unsigned long long)count;
- (void)dealloc;
- (long long)indexOf:(id)arg1;
- (id)init;
- (bool)isEmpty;
- (id)peek;
- (id)peekAt:(unsigned long long)arg1;
- (void)put:(id)arg1;
- (bool)remove:(id)arg1;
- (void)setWaitOnTake:(bool)arg1;
- (id)take;
- (bool)waitOnTake;

@end
