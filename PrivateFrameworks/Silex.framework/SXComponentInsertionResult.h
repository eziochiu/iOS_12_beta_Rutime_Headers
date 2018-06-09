/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentInsertionResult : NSObject {
    SXComponentInsert * _insert;
    <SXBlueprintMarker> * _marker;
}

@property (nonatomic, readonly) SXComponentInsert *insert;
@property (nonatomic, readonly) <SXBlueprintMarker> *marker;

- (void).cxx_destruct;
- (id)initWithInsert:(id)arg1 marker:(id)arg2;
- (id)insert;
- (id)marker;

@end
