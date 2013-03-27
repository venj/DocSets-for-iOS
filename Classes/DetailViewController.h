//
//  DetailViewController.h
//  DocSets
//
//  Created by Ole Zorn on 05.12.10.
//  Copyright 2010 omz:software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BookmarksViewController.h"

@class DocSet, OutlineItem, OutlineViewController;

@interface DetailViewController : UIViewController <UIPopoverControllerDelegate, UINavigationControllerDelegate, UIWebViewDelegate, UIAlertViewDelegate, UIActionSheetDelegate, BookmarksViewControllerDelegate> {

	UIActionSheet *activeSheet;
	UIPopoverController *outlinePopover;
	UIViewController *outlineViewController;
	UIPopoverController *bookmarksPopover;
	
	NSArray *portraitToolbarItems;
	NSArray *landscapeToolbarItems;
	
	UIToolbar *toolbar;
	UIBarButtonItem *backButtonItem;
	UIBarButtonItem *forwardButtonItem;
	UIBarButtonItem *outlineButtonItem;
	UIBarButtonItem *bookmarksButtonItem;
	UIBarButtonItem *actionButtonItem;
	UILabel *titleLabel;
	
	UITapGestureRecognizer *tapGestureRecognizer;
	BOOL isBarHidden;
	
	UIView *coverView;
	UIWebView *webView;
	
	DocSet *docSet;
	NSDictionary *book;
	NSString *bookPath;
	NSURL *selectedExternalLinkURL;
}

@property (nonatomic, strong) DocSet *docSet;
@property (nonatomic, strong) NSURL *currentURL;

- (void)showNode:(NSManagedObject *)node inDocSet:(DocSet *)docSet;
- (void)showToken:(NSDictionary *)tokenInfo inDocSet:(DocSet *)docSet;
- (void)showOutlineItem:(OutlineItem *)outlineItem;
- (void)openURL:(NSURL *)URL withAnchor:(NSString *)a;
- (NSString *)bookPathForURL:(NSURL *)URL;

@end
