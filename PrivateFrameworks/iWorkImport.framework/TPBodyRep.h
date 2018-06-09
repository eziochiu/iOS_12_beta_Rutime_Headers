/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPBodyRep : TSWPRep {
    TPBodyLayout * _bodyLayout;
    NSSet * _lastSelectedInfos;
}

@property (nonatomic, readonly) TPBodyLayout *bodyLayout;

- (void).cxx_destruct;
- (id)bodyLayout;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (id)storage;

@end
