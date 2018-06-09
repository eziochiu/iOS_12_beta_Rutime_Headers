/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICCollaborationColorManager : NSObject {
    NSMutableDictionary * _userIDToColorsDict;
}

@property (nonatomic, retain) NSMutableDictionary *userIDToColorsDict;

- (void).cxx_destruct;
- (id)baseColorValuesForUserID:(id)arg1;
- (id)containerScopedUserRecordName;
- (struct UIColor { Class x1; }*)highlightColorForUserID:(id)arg1 withPercentage:(double)arg2 forNote:(id)arg3;
- (id)init;
- (id)participantAXDisplayNameForUserID:(id)arg1 forNote:(id)arg2;
- (void)setUserIDToColorsDict:(id)arg1;
- (id)userIDToColorsDict;

@end
