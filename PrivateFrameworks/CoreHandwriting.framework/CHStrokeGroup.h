/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeGroup : NSObject {
    long long  _ancestorIdentifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    long long  _classification;
    <CHStrokeIdentifier> * _firstStrokeIdentifier;
    <CHStrokeIdentifier> * _lastStrokeIdentifier;
    NSSet * _strokeIdentifiers;
    long long  _uniqueIdentifier;
}

@property (nonatomic, readonly) long long ancestorIdentifier;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } averageWritingOrientation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) long long classification;
@property (nonatomic, readonly) <CHStrokeIdentifier> *firstStrokeIdentifier;
@property (nonatomic, readonly) <CHStrokeIdentifier> *lastStrokeIdentifier;
@property (nonatomic, readonly) NSSet *strokeIdentifiers;
@property (nonatomic, readonly) long long uniqueIdentifier;

+ (long long)_newStrokeGroupUniqueIdentifier;
+ (bool)isStrokeGroupSet:(id)arg1 equivalentToStrokeGroupSet:(id)arg2;

- (long long)ancestorIdentifier;
- (struct CGVector { double x1; double x2; })averageWritingOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (long long)classification;
- (void)dealloc;
- (id)description;
- (id)firstStrokeIdentifier;
- (id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 classification:(long long)arg6;
- (id)init;
- (id)initWithAncestorIdentifier:(long long)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 classification:(long long)arg6;
- (id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 classification:(long long)arg5;
- (bool)isEquivalentToStrokeGroup:(id)arg1;
- (id)lastStrokeIdentifier;
- (id)strokeIdentifiers;
- (long long)uniqueIdentifier;

@end
