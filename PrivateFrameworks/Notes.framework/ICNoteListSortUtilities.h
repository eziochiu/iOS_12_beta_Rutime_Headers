/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICNoteListSortUtilities : NSObject

+ (long long)currentNoteListSortType;
+ (id)descriptionForNoteListSortType:(long long)arg1;
+ (bool)isMenuItemCurrentSortTypeForTag:(long long)arg1;
+ (void)setCurrentNoteListSortType:(long long)arg1;
+ (void)setCurrentNoteListSortTypeByTag:(long long)arg1;
+ (id)sortDescriptorsForCurrentType;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(bool)arg1;
+ (id)sortDescriptorsForPinnedNotes;
+ (id)sortDescriptorsForType:(long long)arg1;
+ (long long)sortTypeForTag:(long long)arg1;
+ (long long)tagForSortType:(long long)arg1;

@end
