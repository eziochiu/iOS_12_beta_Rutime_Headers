/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportDiff : NSObject {
    NSArray * _deletedElements;
    NSDictionary * _deletedElementsIndices;
    NSArray * _groupDiffs;
    NSArray * _insertedElements;
    NSDictionary * _insertedElementsIndices;
    NSArray * _modifiedElements;
    NSDictionary * _modifiedElementsIndices;
    NSString * _viewportIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *deletedElements;
@property (nonatomic, readonly, copy) NSDictionary *deletedElementsIndices;
@property (nonatomic, readonly, copy) NSArray *groupDiffs;
@property (nonatomic, readonly, copy) NSArray *insertedElements;
@property (nonatomic, readonly, copy) NSDictionary *insertedElementsIndices;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly, copy) NSArray *modifiedElements;
@property (nonatomic, readonly, copy) NSDictionary *modifiedElementsIndices;
@property (nonatomic, readonly, copy) NSString *viewportIdentifier;

- (void).cxx_destruct;
- (id)deletedElements;
- (id)deletedElementsIndices;
- (id)groupDiffs;
- (id)init;
- (id)initWithViewportIdentifier:(id)arg1 insertedElements:(id)arg2 insertedElementsIndices:(id)arg3 deletedElements:(id)arg4 deletedElementsIndices:(id)arg5 modifiedElements:(id)arg6 modifiedElementsIndices:(id)arg7 groupDiffs:(id)arg8;
- (id)insertedElements;
- (id)insertedElementsIndices;
- (bool)isEmpty;
- (id)modifiedElements;
- (id)modifiedElementsIndices;
- (id)viewportIdentifier;

@end
