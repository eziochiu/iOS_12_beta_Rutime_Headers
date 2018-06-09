/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFLWorkflow : NSObject <NSCopying> {
    NSArray * _actions;
    NSString * _associatedAppBundleIdentifier;
    NSString * _name;
    NSString * _workflowDescription;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, readonly, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *workflowDescription;

- (void).cxx_destruct;
- (id)actions;
- (id)associatedAppBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 description:(id)arg2 associatedAppBundleIdentifier:(id)arg3 actions:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)workflowDescription;

@end
