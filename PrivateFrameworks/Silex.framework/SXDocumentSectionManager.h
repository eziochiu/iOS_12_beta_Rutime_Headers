/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDocumentSectionManager : NSObject <SXDocumentSectionManager> {
    NSMutableDictionary * _blueprints;
    <SXDocumentSectionHosting> * _hosting;
}

@property (nonatomic, readonly) NSMutableDictionary *blueprints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXDocumentSectionHosting> *hosting;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applySectionBlueprint:(id)arg1 identifier:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 width:(double)arg4;
- (id)blueprints;
- (double)heightForBlueprint:(id)arg1 width:(double)arg2;
- (id)hosting;
- (id)initWithSectionHosting:(id)arg1;
- (id)view;
- (id)viewController;

@end
