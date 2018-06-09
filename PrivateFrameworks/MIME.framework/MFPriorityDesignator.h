/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFPriorityDesignator : NSObject {
    int  _priority;
}

+ (id)currentDesignator;
+ (void)destroyCurrentDesignator;

- (int)priority;
- (void)setPriority:(int)arg1;

@end
