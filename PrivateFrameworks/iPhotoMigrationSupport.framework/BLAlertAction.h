/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
 */

@interface BLAlertAction : NSObject {
    id /* block */  _block;
    NSString * _name;
}

@property (readonly) id /* block */ block;
@property (readonly) NSString *name;

+ (id)actionWithName:(id)arg1 andBlock:(id /* block */)arg2;
+ (id)cancelAction;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithName:(id)arg1 andBlock:(id /* block */)arg2;
- (id)name;

@end
