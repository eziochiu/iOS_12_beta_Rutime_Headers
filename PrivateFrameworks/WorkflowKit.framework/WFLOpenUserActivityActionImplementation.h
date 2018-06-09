/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFLOpenUserActivityActionImplementation : WFLActionImplementation {
    LSApplicationWorkspace * _applicationWorkspace;
}

@property (nonatomic, readonly) LSApplicationWorkspace *applicationWorkspace;

+ (void)initialize;

- (void).cxx_destruct;
- (id)applicationWorkspace;
- (id)init;
- (id)initWithApplicationWorkspace:(id)arg1;
- (void)run;

@end
