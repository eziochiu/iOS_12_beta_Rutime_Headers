/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXBlueprintAnalyzer : NSObject <SXBlueprintAnalyzer> {
    <SXDocumentControllerProvider> * _documentControllerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <SXDocumentControllerProvider> *documentControllerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)analyzeBlueprint:(id)arg1 layoutDataProvider:(id)arg2 onMarkerFound:(id /* block */)arg3 then:(id /* block */)arg4 onEndReached:(id /* block */)arg5;
- (bool)componentPlacedAboveComponentBlueprint:(id)arg1 blueprint:(id)arg2;
- (id)documentControllerProvider;
- (id)initWithDocumentControllerProvider:(id)arg1;
- (void)iterateMarkers:(id)arg1 onMarkerFound:(id /* block */)arg2 then:(id /* block */)arg3 onEndReached:(id /* block */)arg4;
- (id)markersFromBlueprint:(id)arg1 layoutDataProvider:(id)arg2 cursor:(id)arg3;
- (void)setDocumentControllerProvider:(id)arg1;

@end
