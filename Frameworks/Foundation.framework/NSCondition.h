/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCondition : NSObject <NSLocking> {
    void * _priv;
}

@property (copy) NSString *name;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)broadcast;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)lock;
- (id)name;
- (void)setName:(id)arg1;
- (void)signal;
- (void)unlock;
- (void)wait;
- (bool)waitUntilDate:(id)arg1;

@end
