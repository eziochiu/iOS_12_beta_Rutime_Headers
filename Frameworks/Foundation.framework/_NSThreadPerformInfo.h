/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSThreadPerformInfo : NSObject {
    id  argument;
    NSMutableArray * modes;
    SEL  selector;
    char * signalled;
    id  target;
    NSCondition * waiter;
}

- (void)dealloc;

@end
