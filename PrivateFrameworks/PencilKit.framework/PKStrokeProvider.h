/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKStrokeProvider : NSObject <CHStrokeProvider> {
    PKDrawing * _drawing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKDrawing *drawing;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *orderedStrokes;
@property (readonly, retain) <CHStrokeProviderVersion> *strokeProviderVersion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)compareOrderOfStroke:(id)arg1 toStroke:(id)arg2;
- (long long)compareOrderOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;
- (id)drawing;
- (bool)enumerateChangesSinceVersion:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithDrawing:(id)arg1;
- (id)orderedStrokes;
- (id)strokeForIdentifier:(id)arg1;
- (id)strokeProviderVersion;

@end
