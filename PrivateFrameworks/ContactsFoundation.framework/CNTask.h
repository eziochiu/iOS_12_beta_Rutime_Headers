/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNTask : NSObject {
    bool  _cancelled;
    NSString * _name;
}

@property (getter=isCancelled, readonly) bool cancelled;
@property (copy) NSString *name;

+ (id)taskWithBlock:(id /* block */)arg1;
+ (id)taskWithError:(id)arg1;
+ (id)taskWithName:(id)arg1 block:(id /* block */)arg2;
+ (id)taskWithName:(id)arg1 error:(id)arg2;
+ (id)taskWithName:(id)arg1 result:(id)arg2;
+ (id)taskWithName:(id)arg1 subtasks:(id)arg2;
+ (id)taskWithResult:(id)arg1;

- (void).cxx_destruct;
- (bool)cancel;
- (id)description;
- (id)flatMap:(id /* block */)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (bool)isCancelled;
- (id)name;
- (id)recover:(id /* block */)arg1;
- (id)run;
- (id)run:(id*)arg1;
- (void)setName:(id)arg1;

@end
