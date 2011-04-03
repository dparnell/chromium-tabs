//
//  test.h
//  chromium-tabs
//
//  Created by Liu Junliang on 11-4-2.
//  Copyright 2011年 HKUST. All rights reserved.
//

#import <Foundation/Foundation.h>
// ChromiumTabs

// Describes the |CTBrowser| class which represents one set of tabs (a window).
//#import <ChromiumTabs/CTBrowser.h>

// Describes the |CTBrowserWindowController| class which represents a window with
// tabs. It also manages one |CTBrowser| instance (owns the reference).
//#import <ChromiumTabs/CTBrowserWindowController.h>

// Describes the |CTTabContents| class which represents the contents of a tab,
// including icon, title and state (loading, crashed, etc).
#import <ChromiumTabs/CTTabContents.h>

// Toolbar view and view controller
#import <ChromiumTabs/CTToolbarView.h>
#import <ChromiumTabs/CTToolbarController.h>

// Utilities
#import <ChromiumTabs/CTUtil.h>

@interface test : NSObject {
@private
    
}

@end
